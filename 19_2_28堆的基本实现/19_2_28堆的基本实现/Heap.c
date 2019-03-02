#define _CRT_SECURE_NO_WARNINGS 1


#include "Heap.h"

//void swap(HpDataType* parent,HpDataType*child,sizeof(HpDataType));
void Adjust(heap *hp,int size)
{
	int parent=0;
	int child=2*parent+1;
	HpDataType temp;
	while(child<hp->size)
	{
		//找左右孩子中最小的孩子
		if(child+1<hp->size&&hp->arr[child]>hp->arr[child+1])
		{
			child+=1;
		}

		if(hp->arr[parent]>hp->arr[child])
		{
			//交换两个数
            temp=hp->arr[parent];
			hp->arr[parent]=hp->arr[child];
			hp->arr[child]=temp;
			parent=child;
			child=2*child+1;
		}

		else
			return;
	}
}


void HeapCreate(heap *hp,HpDataType arr[10],int size)//堆的创建
{
	
	assert(hp);//先完成初始化，包括内存的开辟，数据的初始化等等。
	hp->arr=(HpDataType*)malloc(sizeof(HpDataType)*size);
	if(hp->arr==NULL)
	{
		printf("开辟内存失败！\n");
	}
    memcpy(hp->arr,arr,sizeof(HpDataType)*size);
	hp->capacity=size;
	hp->size=size;
	//做成小堆
	
	Adjust(hp,size);
}
void Heapdestry(heap *hp)//堆的销毁
{
	assert(hp);
	if(hp==NULL)
	{
        return;
	}
	hp->size=0;
	hp->capacity=0;
	//free(hp);
	//hp->arr=NULL;
	printf("销毁成功！\n");
	
}
void AddData(HpDataType ret,heap *hp)
{
	int i=0;
	assert(hp);
	//先加进去
	for(i=hp->size;i>0;i--)
	{
		hp->arr[i]=hp->arr[i-1];
	}
	hp->arr[i]=ret;
	hp->size+=1;
	//然后调整
	Adjust(hp,hp->size);

}
void Addcatacity(heap *hp)//增容
{
	HpDataType* p=NULL;
	assert(hp);
	p=(HpDataType*)realloc(hp->arr,sizeof(HpDataType)*hp->size+2);
	if(p==NULL)
	{
		printf("增容失败！\n");
		return;
	}
	hp->arr=p;
	hp->capacity=hp->size+2;

}

void Heapinsert(HpDataType ret,heap *hp)//堆的插入数据,插入完成，依然有序
{
     assert(hp);
	 //是否还能塞得下
	 if(hp->capacity==hp->size)
	 {
		 //满了，扩容
		 Addcatacity(hp);
		
	 }
	
		 //没满，直接加
		 AddData(ret,hp);
	
}
void Heapafterdelete(heap * hp)//堆的最后一个元素的删除
{
	assert(hp);
	//判空
	if(hp->size==0)
	{
		return;
	} 
	//free();
	hp->size-=1;
}
void Heapfrontdelete(heap * hp)//堆顶元素的删除
{
	int i=0;
	HpDataType ret;
	assert(hp);
	//判空
	if(hp->size==0)
	{
		return;
	}
	//把堆顶元素和最后一个元素交换
	ret=hp->arr[0];
	hp->arr[0]=hp->arr[hp->size-1];
    hp->arr[hp->size-1]=ret;
	Heapafterdelete(hp);
    Adjust(hp,hp->size);

}
HpDataType HeapTop(heap *hp)//堆顶元素的获取
{

	assert(hp);
	//判空
	if(hp->size==0)
	{
		return;
	}
	else
	return hp->arr[0];
}
int HeapEmpty(heap *hp)//检测堆是否为空
{
	assert(hp);
	return (hp->arr[0]==0);
}
int HeapSize(heap *hp)//获取堆中有效元素的个数
{
	assert(hp);
	return hp->size;
}
void HeapPrint(heap *hp)//打印函数
{
	int i=0;
	assert(hp);
	if(hp->size==0)
	{
		return;
	}
	for(i=0;i<hp->size;i++)
	{
		printf("%d ",hp->arr[i]);
	}
	printf("\n");
}
void TEST()
{
	heap h;
	HpDataType arr[10]={27,15,19,18,28,34,65,49,25,37};

	HeapCreate(&h,arr,10);//堆的创建
	HeapPrint(&h);//打印
    Heapinsert(23,&h);//插入数据
    HeapPrint(&h);//打印
	Heapinsert(17,&h);//插入数据
    HeapPrint(&h);//打印
	printf("堆顶的元素是 %d \n",HeapTop(&h));
	Heapfrontdelete(&h);
	HeapPrint(&h);
	Heapafterdelete(&h);
	HeapPrint(&h);
    printf("堆中的元素个数为： %d\n",HeapSize(&h));
	Heapdestry(&h);

}