#define _CRT_SECURE_NO_WARNINGS 1

#include "BinTree.h"

//Node * _cpy(Node * Bt,BtDatatyepf *arr,int size,int* count)
//{
//	Node * ret=NULL;
//	assert(Bt);
//	if((*count)<size&&arr[*count]=='*')
//	{
//		
//		Bt->data=NULL;
//		++(*count);
//		ret=(Node *)malloc(sizeof(BtDatatyepf));
//		if(ret==NULL)//�������ʧ��
//		{
//			assert(0);
//		}
//		Bt=ret;
//	}
//	if((*count)<size&&arr[*count]!='*')
//	{
//		
//        Bt->data=arr[*count];
//	    ++(*count);
//	    ret=(Node *)malloc(sizeof(BtDatatyepf));
//		if(ret==NULL)//�������ʧ��
//		{
//			assert(0);
//		}
//		Bt=ret;
//	_cpy(Bt->Left,arr,size,count);
//    ++(*count);
//	_cpy(Bt->Right,arr,size,count);
//	}
//	return Bt;
//
//}
//
//void BTcreat(Node * Bt,BtDatatyepf *arr,int size)//������������
//{
//    Node * ret=NULL;
//	
//	int count=0;
//	assert(Bt);
//	ret=(Node *)malloc(sizeof(BtDatatyepf));
//	if(ret==NULL)//�������ʧ��
//	{
//		assert(0);
//	}

//	Bt=ret;
//    
//	//��������
//	
//	_cpy(Bt,arr,size,&count);
//}


Node* BuyNode(BtDatatyepf val)
{
	Node *ret=NULL;
	ret=(Node*)malloc(sizeof(Node));
	if(ret==NULL)
	{
		assert(0);
	}
	ret->data=val;
	ret->Left=NULL;
	ret->Right=NULL;
	return ret;
}
Node* BTcreat(BtDatatyepf *arr,int size,int *count)//������������
{
	Node *root=NULL;
	//assert(arr);
	
	while(*count<size&&arr[*count]!='*'&&arr[*count]!='\0')
	{
		root=BuyNode(arr[*count]);
		++(*count);
		root->Left=BTcreat(arr,size,count);
		++(*count);
		root->Right=BTcreat(arr,size,count);
	}
	return root;

	//BuyNode(arr[*count]);
}

void PreBtree(Node* Bt)//ǰ�����  ABDCEF
{
	
	//assert(Bt);


	if(Bt)
	{
		printf("%c ",Bt->data);
		PreBtree(Bt->Left);
		PreBtree(Bt->Right);
	}


     
}
void MidBtree(Node* Bt)//�������
{
	//assert(Bt);


	if(Bt)
	{   
		MidBtree(Bt->Left);
		printf("%c ",Bt->data);
		MidBtree(Bt->Right);
	}

}
void AfterBtree(Node* Bt)//�������
{
	//assert(Bt);


	if(Bt)
	{   
		AfterBtree(Bt->Left);
		AfterBtree(Bt->Right);
		printf("%c ",Bt->data);
		
	}

}
int HightBtree(Node *Bt)//�����ĸ߶�
{
	//assert(Bt);
	if(Bt==NULL)
	{
		return 0;
	}
	if(Bt->Left==NULL&&Bt->Right==NULL)
	{
       return 1;
	}
	//���ĸ߶ȴ���1
	return 1+(HightBtree(Bt->Left)>HightBtree(Bt->Right)?HightBtree(Bt->Left):HightBtree(Bt->Right));
}
int SizeBtree(Node *Bt)//���ܽڵ�ĸ���
{
	//assert(Bt);
	if(Bt==NULL)
	{
		return 0;
	}
	if(Bt->Left==NULL&&Bt->Right==NULL)
	{
		return 1;
	}
	return 1+SizeBtree(Bt->Left)+SizeBtree(Bt->Right);
}
int BalaceBt(Node * Bt)//����Ƿ�Ϊƽ����  1��  0��
{
	//assert(Bt);
	if(Bt==NULL)
	{
		return 1;
	}
	if(Bt->Left==NULL&&Bt->Right==NULL)
	{
		return 1;
	}
	if(BalaceBt(Bt->Left)&&BalaceBt(Bt->Right)&&abs(HightBtree(Bt->Left)-HightBtree(Bt->Right))<2)
		return 1;
	return 0;
}
int Leafsize(Node *Bt)//��ȡҶ�ӽڵ�ĸ���
{
	//
	if (Bt==NULL)
	{
		return 0;
	}
	if (Bt->Left==NULL&&Bt->Right==NULL)
	{
		return 1;
	}
	return Leafsize(Bt->Left)+Leafsize(Bt->Right);
}
int KsizeBt(Node *Bt,int k)//���K�������
{
	
    if(Bt==NULL)
	{
		return 0;
	}
	if((Bt->Left==NULL&&Bt->Right==NULL)||k==1)
	{
		return 1;
	}
	return KsizeBt(Bt->Left,k-1)+KsizeBt(Bt->Right,k-1);
}

Node* FindvalBt(Node *Bt,BtDatatyepf val)//��ֵΪval�Ľ�㣬�������ĵ�ַ
{
	if(Bt==NULL)
	{
		return NULL;
	}
	if(Bt->data==val)
	{
		return Bt;
	}
   if(FindvalBt(Bt->Left,val)!=0)
   {
	   return Bt->Left;
   }
   return FindvalBt(Bt->Right,val);

}
//Node* ParentfindBt(Node * Bt,BtDatatyepf val)//��һ������˫��,�������˫�׵�ֵ
//{
//  if(Bt==NULL)
//{
//   return NULL;
//}
//  if(Bt->Left==NULL&&Bt->Right==NULL)
//  {
//	  return  NULL;
//  }
//  if(Bt->Left&&Bt->Left->data==val||Bt->Right->data==val)
//  {
//	  return Bt;
//  }
//  if(Bt->Right&&Bt->Right->data==val)
//  {
//	  return Bt;
//  }
//ParentfindBt(Bt->Left,val);
//ParentfindBt(Bt->Right,val);
//}
void TEST()
{
	BtDatatyepf arr[]="ABD***CE**F";
	Node *Bt=NULL;
	int count =0;
	Bt=BTcreat(arr,(sizeof(arr)/sizeof(arr[0])),&count);
	printf("ǰ�������\n");
	PreBtree(Bt);
	printf("\n");

	printf("���������\n");
	MidBtree(Bt);
	printf("\n");

	printf("���������\n");
    AfterBtree(Bt);
	printf("\n");
	printf("���ĸ߶�Ϊ��%d \n",HightBtree(Bt));
	printf("�����ܽ�����Ϊ��%d \n",SizeBtree(Bt));
	printf("�Ƿ���ƽ����(1Ϊ��  0Ϊ��)��%d\n",BalaceBt(Bt));
	printf("Ҷ�ӽڵ�ĸ����ǣ�%d\n",Leafsize(Bt));
	printf("��%d��Ľ������ǣ�%d\n",3,KsizeBt(Bt,3));
	printf("%d\n",FindvalBt(Bt,'F'));
	//printf("%c����˫����%c\n",'F',ParentfindBt(Bt,'F')->data);

 
}