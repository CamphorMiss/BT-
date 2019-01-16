#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"



void SeqListInit(PSeqList ps)
{
	assert(ps);

	ps->_array=(DataType*)malloc(sizeof(DataType)*6);
	if(ps->_array==NULL)
	{
		printf("初始化未成功!\n");
		assert(0);
		return;
	}
	ps->_capacity=6;
	ps->_size=0;
}
int check_Capacity(PSeqList ps)
{
  assert(ps);
  if(ps->_size==ps->_capacity)
  {
	  DataType*ret=NULL;
  //需要增容
 //realloc(ps->_array,2*sizeof(DataType)*ps->_capacity);
	 ret =(DataType*)malloc(2*sizeof(DataType)*(ps->_capacity));
	 if(ret==NULL)
	 {   
		 printf("增容失败！\n");
		 assert(0);
		 return -1;
	 }
	 //ret=ps->_array;
	 memcpy(ret,ps->_array,sizeof(DataType)*ps->_size);
     ps->_array=ret;
     ps->_capacity=2*ps->_capacity;
	 printf("增容成功！\n");
	 return 1;
  }
  return 0;
}
void SeqListDestroy(PSeqList ps)
{
	assert(ps);
	free(ps->_array);
	ps->_array=NULL;
	ps->_size=0;
	ps->_capacity=0;
}

// 尾插 
void SeqListPushBack(PSeqList ps, DataType data)
{
	assert(ps);
   SeqListInsert(ps,ps->_size,data);
}
// 尾删 
void SeqListPopBack(PSeqList ps)
{
	assert(ps);
   SeqListErase(ps,ps->_size-1);
}

// 头插 
void SeqListPushFront(PSeqList ps, DataType data)
{
	assert(ps);
   SeqListInsert(ps,0,data);
}
// 头删 
void SeqListPopFront(PSeqList ps)
{
	assert(ps);
	SeqListErase(ps,0);
}

// 任意位置插入 
void SeqListInsert(PSeqList ps,int pos,DataType data)
{
	int i=0;
	assert(ps);
	if(check_Capacity(ps)>=0)
	{
		if(pos<0&&(pos>ps->_size))
		 {
			 printf("此位置非法，无法插入！\n");
			 return;
		 }
		else
		{
			for(i=ps->_size;i>=pos;i--)
			{
				ps->_array[i]=ps->_array[i-1];
			}
			ps->_array[pos]=data;
			ps->_size++;
		}
		
  } 
}

// 任意位置删除 
void SeqListErase(PSeqList ps, int pos)
{   
	int i=0;
	assert(ps);
	if(pos<0&&pos>=ps->_size)
	{
		printf("这个位置没有元素，无法删除！\n");
		return;
	}
	if(ps->_size==0)
	{
		printf("没有元素可以删除！\n");
		return;
	}
	for(i=pos;i<ps->_size-1;i++)
	{
		ps->_array[i]=ps->_array[i+1];
	}
	ps->_size--;

}

// 检测data是否放在顺序表中 
int SeqListFind(PSeqList ps, DataType data)
{
	int i=0;
	assert(ps);
	for(i=0;i<ps->_size;i++)
	{
		if(ps->_array[i]==data)
			return i;
	}
	return -1;
}

// 移除顺序表中第一个值为data的元素 
void SeqListRemove(PSeqList ps, DataType data)
{
	int i=0;
	assert(ps);
    for(i=0;i<ps->_size;i++)
	{
		if(ps->_array[i]==data)
		{
             SeqListErase(ps,i);
			 return;
		}
	}
}

// 移除顺序表中所有值为data的元素 
void SeqListRemoveAll(PSeqList ps, DataType data)
{
	int i=0;
	assert(ps);
    for(i=0;i<ps->_size;i++)
	{
		if(ps->_array[i]==data)
		{
            SeqListErase(ps,i);
		}
	}
	return;
}

// 获取顺序表有效元素个数 
int SeqListSize(PSeqList ps)
{
	assert(ps);
	return ps->_size;
}

// 获取顺序表的容量 
int SeqListCapacity(PSeqList ps)
{
	assert(ps);
	return ps->_capacity;
}

// 检测顺序表是否为空 
int SeqListEmpty(PSeqList ps)
{
     assert(ps);
	 return ps->_size ;
}

// 获取顺序表中第一个元素 
DataType SeqListFront(PSeqList ps)
{
	assert(ps);
	return ps->_array[0];
}

// 获取顺序表中最后一个元素 
DataType SeqListBack(PSeqList ps)
{
	assert(ps);
	return ps->_array[ps->_size-1];
}
 
void PrintSeqList(PSeqList ps)
{ 
	int i=0;
	assert(ps);
	for(i=0;i<ps->_size;i++)
	{
		printf("%d ",ps->_array[i]);
	}
	printf("\n");
}

