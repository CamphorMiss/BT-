#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//实现动态顺序表的以下操作： 

int main()
{
	SeqList s={0};
    SeqListInit(&s);
	
	// 尾插
	
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

	 //尾删 
	SeqListPopBack(&s); 
	 PrintSeqList(&s);

	// 头插 
	  SeqListPushFront(&s,0); 
       SeqListPushFront(&s,8); 
	    PrintSeqList(&s);

	// 头删 
	SeqListPopFront(&s); 
	 PrintSeqList(&s);
	

	// 任意位置插入 
	SeqListInsert(&s,3,6);
	 PrintSeqList(&s);

	// 任意位置删除 
	SeqListErase(&s,4);
	 PrintSeqList(&s);

	// 检测data是否放在顺序表中 
	if(SeqListFind(&s,6>=0))
	{
		printf("该数字在顺序表中\n");
	}
	else
	{
        printf("该数字在顺序表中不存在！\n");
	}

	// 移除顺序表中第一个值为data的元素 
	SeqListRemove(&s,7);
	
	 PrintSeqList(&s);

	// 移除顺序表中所有值为data的元素 
	SeqListRemoveAll(&s,1);
	 PrintSeqList(&s);
		

	// 获取顺序表有效元素个数 
	printf("顺序表中有效元素的个数为：%d\n",SeqListSize(&s)); 

	// 获取顺序表的容量 
	printf("顺序表中的容量为：%d\n",SeqListCapacity(&s)); 

	// 检测顺序表是否为空 
	if(SeqListEmpty(&s)==0)
	{
		printf("顺序表为空！\n");
	}
	else
	{
		printf("顺序表非空！\n");
	}
	// 获取顺序表中第一个元素 
	printf("顺序表中第一个元素是：%d\n",SeqListFront(&s)); 

	// 获取顺序表中最后一个元素 
	printf("顺序表中最后一个元素为：%d\n",SeqListBack(&s)); 
	//打印这个链表 
   
	SeqListDestroy(&s); 

   system("pause");
	return 0;
}