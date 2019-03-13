#define _CRT_SECURE_NO_WARNINGS 1


#include "sort.h"

void swap(int *x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void PrintfSort(int * arr,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
	  printf("%d ",arr[i]);
	}
	printf("\n");
}
void InsertSort(int *arr,int size)
{//升序
    //assert(arr);
	int i=0;
	int key=0;
	int j=0;
    for(i=1;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&key<arr[j])
		{
		  arr[j+1]=arr[j];
		  j--;
		}
		
		arr[j+1]=key;
	}
	
}
void ShellSort(int * arr,int size)
{
  int gap=size/3+1;
  int i=0;
  while(gap>0)
  {
  for(i=0;i<size;i++)
  {
     if(i+gap<size&&arr[i]>arr[i+gap])
		 swap(&arr[i],&arr[i+gap]);
  }
    gap=gap-1;
  }
}
void SelecSort(int *arr,int size)//选择排序
{
  //标记最大的放到最后
	int maxdata;
	int i=0;
	int j=0;
	for(j=0;j<size-1;j++)
	{
	//j趟
	maxdata=0;
	for(i=1;i<size-j;i++)
	{//一个数的排序
	   
	   if(arr[i]>arr[maxdata])
	   {
	      maxdata=i;
	   }
	}
	   if(maxdata!=i-1)                                                                                                                    
		swap(&arr[maxdata],&arr[i-1]);
	}
}



void SelecSortOP(int *arr,int size)//选择排序优化
{
  int maxdata;//最大值的位置
  int mixdata;//最小值的位置
  int i=0;
  int left=0;
  int right=size-1;
while(left<right)
{
  maxdata=left;
  mixdata=left;
  for(i=left;i<=right;i++)
  {
    if(arr[i]>arr[maxdata])
	{
	   maxdata=i;
	}
	if(arr[i]<arr[mixdata])
	{
	   mixdata=i;
	}
  }
    if(maxdata!=right)
	 swap(&arr[maxdata],&arr[right]);
	if(mixdata==right)//特殊情况的处理，最右边的是最小，交换之后，最右边已经是最大值，此时最小的已经在最大的位置
		mixdata=maxdata;
	if(mixdata!=left)
	swap(&arr[mixdata],&arr[left]);
	++left;
	--right;
}
}


void BubbleSort(int *arr,int size)//冒泡排序
{
   int i=0;
   int j=0;
   for(i=0;i<size;i++)
   {
        for(j=0;j<size-i-1;j++)
		{
		   if(arr[j]>arr[j+1])
			  swap(&arr[j],&arr[j+1]);
		
		}
   
   }

}

void BubbleSortOP(int *arr,int size)//冒泡排序优化算法
{
   int i=0;
   int j=0;
   int  temp=0;
   for(i=0;i<size;i++)
   {
        for(j=0;j<size-i-1;j++)
		{
		   if(arr[j]>arr[j+1])
		   {
			 temp=1;
			  swap(&arr[j],&arr[j+1]);
		   }
		}
   if(temp==0)
	   break;
   }
}


//void QuickSort(int * arr,int left,int right)//快速排序  去最后值为基准值，划分
//{
//	int size=right;
//	int begin=left;
//   int key=arr[size-1];
//   /*int i;*/
//   /*int *begin;
//   int *end;
//   begin=&arr[left];
//   end=&arr[right-1];*/
//	while(left<right)
//	{
//		while(begin<size)
//		{
//	  	 while(arr[begin]<key)
//			 ++begin;
//	     while(arr[size-1]>key)
//			 --size;
//			
//		swap(&arr[left],&arr[right-1]);
//		}
//	swap(&arr[left],&arr[size-1]);
//    QuickSort(arr,left,begin);
//	QuickSort(arr,begin+1,right);
//	}
//}
int FindKeyPos(int * arr,int left,int right)
{
	int temp=right;
  int key=arr[temp-1];
  int end=right-1;
  int ret=0;
  while(left<end)
  {
     while(left<end&&arr[left]<=key)
		 ++left;
	 while(left<end&&arr[end]>=key)
		--end;
	 if(left<end)
    swap(&arr[left],&arr[end]);
	ret=1;
  }
swap(&arr[left],&arr[temp-1]);
  return left;
}

void QuickSort(int * arr,int left,int right)
{
	int pos;
  if(left<right)
	 {
	 pos=FindKeyPos(arr,left,right);
	 QuickSort(arr,left,pos);
	 QuickSort(arr,pos+1,right);

	 }
}

//void DivideSort(int *arr,int left,int right,int mid,int * temp)//划分，合并，从辅助空间拷贝到arr中去
//{
//    /* int mid=left+((right-left)>>1);
//	 int *temp=(int *)malloc(sizeof(int)*(right-1));
//	 if(temp==NULL)
//		 return;
//	 if(left<right-1)
//	 {
//	 
//	 }*/
//
//	int i = left;
//	int j = mid + 1;
//	int k = left;//临时下标
//	while (i <= mid&&j <= right){
//		if (arr[i] < arr[j]){
//			temp[k++] = arr[i++];
//		}
//		else{
//			temp[k++] = arr[j++];
//		}
//	}
//	while (i <= mid){
//		temp[k++] = arr[i++];
//	}
//	while (j <= right){
//		temp[k++] = arr[j++];
//	}
//	//把temp中的内容拷给arr数组中
//	//进行归并的时候，处理的区间是arr[left,right),对应的会把
//	//这部分区间的数组填到tmp[left,right)区间上
//	memcpy(arr + left, temp + left, sizeof(int)*(right - left+1));
//
//}
//
//void MargeSort(int *arr,int left,int right)//归并排序，外部排序，划分，合并
//{
//   /* if(left<right)
//	{
//	  DivideSort(arr,left,right);
//	
//	}*/
//	int * temp=(int *)malloc(sizeof(int)*(left+((right-left)>>1)));
//	int mid = 0;
//	if (left < right){
//		mid = left + (right - left) / 2;
//		MargeSort(arr, left, mid);
//		MargeSort(arr, mid + 1, right);
//		DivideSort(arr, left, mid, right, temp);
//	}
//}
