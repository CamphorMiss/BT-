#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void bubble_sort(void*base, int sz, int width, 
//
//				int (*cmp)(const void*e1, const void*e2))
//
//{
//
//	int i = 0;
//
//	//趟数
//
//	for(i=0; i<sz-1; i++)
//
//	{
//
//		//一趟的处理
//
//		int j = 0;
//
//		for(j=0; j<sz-1-i; j++)
//
//		{
//
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
//
//			{
//
//				//交换
//
//				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
//
//			}
//
//		}
//
//	}
//
//}
//
//
//
//void print_arr(int arr[], int sz)
//
//{
//
//	int i = 0;
//
//	for(i=0; i<sz; i++)
//
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//
//	printf("\n");
//
//}
//
//
//
//int cmp_int(const void*e1, const void*e2)
//
//{
//
//	return *(int*)e1 - *(int*)e2;
//
//}
//
//
//
//void test1()
//
//{
//
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//
//	print_arr(arr, 10);
//
//	//qsort(arr, 10, sizeof(arr[0]), cmp_int);
//
//	bubble_sort(arr, 10, sizeof(arr[0]), cmp_int);
//
//	print_arr(arr, 10);
//
//}
//
//struct S
//
//{
//
//	char name[20];
//
//	int age;
//
//};
//
//
//
//int cmp_s_by_name(const void*e1, const void*e2)
//
//{
//
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//
//}
//
//
//
//int cmp_s_by_age(const void*e1, const void*e2)
//
//{
//
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//
//}
//
//
//
//void test2()
//
//{
//
//	struct S arr[] = {{"zhangsan", 20},{"lisi", 35},{"wangwu", 15}};
//
//	//qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp_s_by_age);
//
//	bubble_sort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp_s_by_name);
//
//}
//
//int main()
//
//{
//
//	//test1();
//
//	test2();
//
//	system("pause");
//
//	//qsort();
//
//	return 0;
//
//}
//
//
//
//
//#include <stdio.h>
//void test()
//{
//	printf("hello\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	system("pause");
//	return 0;
//}
