#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//ʵ�ֶ�̬˳�������²����� 

int main()
{
	SeqList s={0};
    SeqListInit(&s);
	
	// β��
	
	SeqListPushBack(&s,1); 
	SeqListPushBack(&s,1); 
	SeqListPushBack(&s,2); 
	SeqListPushBack(&s,1); 
	
	
	 PrintSeqList(&s);
	 SeqListPushFront(&s,1); 
	 SeqListPushFront(&s,3); 
	 SeqListPushFront(&s,5); 
	 SeqListPushFront(&s,7);
	 SeqListPushFront(&s,9); 

	 //βɾ 
	SeqListPopBack(&s); 
	 PrintSeqList(&s);

	// ͷ�� 
	  SeqListPushFront(&s,0); 
       SeqListPushFront(&s,8); 
	    PrintSeqList(&s);

	// ͷɾ 
	SeqListPopFront(&s); 
	 PrintSeqList(&s);
	

	// ����λ�ò��� 
	SeqListInsert(&s,3,6);
	 PrintSeqList(&s);

	// ����λ��ɾ�� 
	SeqListErase(&s,4);
	 PrintSeqList(&s);

	// ���data�Ƿ����˳����� 
	if(SeqListFind(&s,6>=0))
	{
		printf("��������˳�����\n");
	}
	else
	{
        printf("��������˳����в����ڣ�\n");
	}

	// �Ƴ�˳����е�һ��ֵΪdata��Ԫ�� 
	SeqListRemove(&s,7);
	
	 PrintSeqList(&s);

	// �Ƴ�˳���������ֵΪdata��Ԫ�� 
	SeqListRemoveAll(&s,1);
	 PrintSeqList(&s);
		

	// ��ȡ˳�����ЧԪ�ظ��� 
	printf("˳�������ЧԪ�صĸ���Ϊ��%d\n",SeqListSize(&s)); 

	// ��ȡ˳�������� 
	printf("˳����е�����Ϊ��%d\n",SeqListCapacity(&s)); 

	// ���˳����Ƿ�Ϊ�� 
	if(SeqListEmpty(&s)==0)
	{
		printf("˳���Ϊ�գ�\n");
	}
	else
	{
		printf("˳���ǿգ�\n");
	}
	// ��ȡ˳����е�һ��Ԫ�� 
	printf("˳����е�һ��Ԫ���ǣ�%d\n",SeqListFront(&s)); 

	// ��ȡ˳��������һ��Ԫ�� 
	printf("˳��������һ��Ԫ��Ϊ��%d\n",SeqListBack(&s)); 
	//��ӡ������� 
   
	SeqListDestroy(&s); 

   system("pause");
	return 0;
}