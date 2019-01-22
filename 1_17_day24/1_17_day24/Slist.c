#define _CRT_SECURE_NO_WARNINGS 1


#include "Slist.h"

void SListInit(SList* pl)
{
	assert(pl);
	//pl=(SList*)malloc(sizeof(Node));
	pl->_pHead=NULL;
}
// 在链表中尾插值为data的节点 
Node* SetNode(SDataType data)//创立一个新节点
{
 Node*NewSlist=NULL;
 NewSlist=(Node*)malloc(sizeof(Node));
 if(NewSlist==NULL)
 {
	 assert(NewSlist);
	 return NULL;
 }

 NewSlist->_data =data;
 NewSlist->_pNext=NULL;
 return NewSlist;
}
void SListPushBack(SList* pl, SDataType data)//尾插一个节点
{
	
	Node*NewSlist=SetNode(data);
	Node*RetSlist=pl->_pHead;
	assert(pl);
	if(pl->_pHead==NULL)
	{
		pl->_pHead=NewSlist;
	}
	else
	{
		while(RetSlist->_pNext)
		{
			RetSlist=RetSlist->_pNext;
		}
		RetSlist->_pNext=NewSlist;
	}
}

// 删除链表最后一个节点 
void SListPopBack(SList* pl)
{
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	while(ret->_pNext->_pNext)
	{
		ret=ret->_pNext;
	}
	free(ret->_pNext );
	ret->_pNext=NULL;
	printf("删除成功！\n");
}

// 在链表第一个元素前插入值为data的节点 
void SListPushFront(SList* pl, SDataType data)
{
	Node* ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	pl->_pHead=SetNode(data);
	pl->_pHead->_pNext=ret;
	//free(ret);
	//ret=NULL;
}
// 删除链表中第一个节点 
void SListPopFront(SList* pl)
{
	Node*ret=NULL;
	assert(pl);
    ret=pl->_pHead;
	pl->_pHead=ret->_pNext;
	free(ret);
}

// 在链表pos位置后插入值为data的节点 
void SListInsertAfter(SList* pl,Node* pos, SDataType data)
{
   Node*ret=NULL;
   Node* New=NULL;
   assert(pl);
   ret=pl->_pHead;
   New=SetNode(data);
   while(ret!=pos)
   {
	   ret=ret->_pNext;
   }
   New->_pNext=ret->_pNext;
   ret->_pNext=New;

}

// 删除链表中pos位置的节点
void SListErase(SList* pl, Node* pos)
{ 
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	if(pl->_pHead==NULL)
	{
		printf("此链表已经为空！无法删除\n");
	}
	else if(pl->_pHead->_pNext==NULL)
	{
		if(pl->_pHead==pos)
		{
			free(pl->_pHead);
			pl->_pHead=NULL;
          }
		else
		{
			printf("位置无效，无法删除！\n");
		}
	}
	else
	{
		//有一个以上的节点
        while(ret->_pNext!=pos)
		{
			ret=ret->_pNext;
		}
		ret->_pNext=pos->_pNext;
		free(pos);
		pos=NULL;
	}
}

// 在链表中查找值为data的节点，找到返回该节点的地址，否则返回空 
Node* SListFind(SList* pl, SDataType data)
{
	Node* ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	while((ret!=NULL)&&(ret->_data!=data))
	{
		ret=ret->_pNext;
	}
 return ret;
}

// 销毁链表 
void SListDestroy(SList* pl)
{
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
    pl->_pHead=NULL;
	free(ret);
	ret=NULL;
	printf("销毁链表成功！\n");
}

// 获取链表中有效节点的个数 
int SListSize(SList* pl)
{
	int count=0;
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	while(ret)
	{
		count+=1;
		ret=ret->_pNext;
	}
	printf("有效元素的个数为：");
	return count;
}

// 检测链表是否为空 
int SListEmpty(SList* pl)
{
	assert(pl);
	printf("返回1 为空，返回0不为空,返回值为：");
	return (NULL==pl->_pHead);//返回1 为空，返回0不为空
}
// 获取链表的第一个节点 
Node* SListFront(SList* pl)
{
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	return ret;

}

// 获取链表的第二个节点 
Node* SListBack(SList* pl)
{
	Node* ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	return ret->_pNext;
}
void PrintSlist(SList* pl)
{ 
	
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	while(ret)
	{
		printf("%d->",ret->_data);
		ret=ret->_pNext;
	}
printf("NULL\n");
}

void SListRemove(SList* pl, SDataType data)//移除第一个值为data的节点
{
	Node* ret=NULL;
	Node* ret2=NULL;
	assert(pl);
	ret=pl->_pHead;
 if(ret==NULL)
 {
	 printf("删除成功！\n");
 }
 else if(ret->_data==data)
 {
	 pl->_pHead=ret->_pNext;
	 free(ret);
	 ret=NULL;
 }
 else
 {
   SListRemove(ret->_pNext,data);
 }

}

	//while((ret!=NULL)&&(ret->_data!=data))//2 0 1 4
	//{
	//	ret2=ret;
	//	ret=ret->_pNext;
	//	
	//}
	//if(ret==NULL)
	//{
	//	return;
	//}
	//else
	//{
	//  ret2->_pNext=ret->_pNext;
	//  //ret->_pNext=ret2->_pNext;
	//  free(ret);
	//  ret=NULL;

void SListRemoveAll(SList* pl, SDataType data)
{ 
	Node*ret=NULL;
	assert(pl);
	ret=pl->_pHead;
	while(ret)
	{
         SListRemove(pl,data);
		 if(pl->_pHead==NULL)
			 break;
		 ret=ret->_pNext;
	}

}
void TEST1(SList* pl)
{
  SListInit(pl);
  SListPushBack(pl,1);
  SListPushBack(pl,2);
  SListPushBack(pl,3);
  SListPushBack(pl,4);
  SListPushBack(pl,5);
  PrintSlist(pl);
  SListPopBack(pl);
  PrintSlist(pl);

  // 在链表第一个元素前插入值为data的节点 
  SListPushFront(pl,0);
  SListPushFront(pl,3);
  SListPushFront(pl,2);
  SListPushFront(pl,3);

  PrintSlist(pl);
  // 删除链表中第一个节点 
   SListPopFront(pl);
   PrintSlist(pl);

	  // 在链表pos位置后插入值为data的节点 
    SListInsertAfter(pl,pl->_pHead->_pNext->_pNext,9);
	PrintSlist(pl);

	  // 删除链表中pos位置的节点
	 SListErase(pl,pl->_pHead->_pNext->_pNext);
	 PrintSlist(pl);
	 SListRemove(pl, 2);//移除第一个值为data的节点
	 PrintSlist(pl);
	 //SListRemoveAll(pl,3);
      // PrintSlist(pl);

	 printf("%d \n",SListBack(pl));
	 //PrintSlist(pl);

	 printf("%d \n",SListFront(pl));
	 //PrintSlist(pl);

	 

	  // 在链表中查找值为data的节点，找到返回该节点的地址，否则返回空 
	SListFind( pl,2);


	 
	  // 获取链表中有效节点的个数 
	printf("%d \n",SListSize(pl));
	

	  // 检测链表是否为空 
	printf("%d \n",SListEmpty(pl));


 // 销毁链表 
	 SListDestroy(pl);
	
}
