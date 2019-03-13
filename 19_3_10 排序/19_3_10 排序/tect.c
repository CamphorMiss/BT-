#define _CRT_SECURE_NO_WARNINGS 1


#include "sort.h"

int main()
{

  int arr[10]={9,1,2,0,7,4,8,6,3,5};
   PrintfSort(arr,sizeof(arr)/sizeof(arr[0]));
   //InsertSort(arr,sizeof(arr)/sizeof(arr[0]));
   //ShellSort(arr,sizeof(arr)/sizeof(arr[0]));
  // SelecSort(arr,sizeof(arr)/sizeof(arr[0]));
    //SelecSortOP(arr,sizeof(arr)/sizeof(arr[0]));
   //BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
   //BubbleSortOP(arr,sizeof(arr)/sizeof(arr[0]));
   //QuickSort(arr,0,10);
   MargeSort(arr,0,10);
   PrintfSort(arr,sizeof(arr)/sizeof(arr[0]));
  
  system("pause");
   return 0;
}