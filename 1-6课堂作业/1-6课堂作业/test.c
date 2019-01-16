#define _CRT_SECURE_NO_WARNINGS 1

//给定长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output 
//其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。


//int* productExceptSelf(int* nums, int n, int* output) 
//{
//    int i=0;
//	int temp=1;
//	int j=0;
//	int *p=output;
//	for(j=0;j<n;j++)
//		{
//	      temp*=(*(nums+i));
//		}
//	for(i=0;i<n;i++)
//	{
//		
//	   *(output+i)=temp/(*(nums+i));
//	p=(output+0);
//	}
//   return p; 
//    
//}
//int main()
//{
//	int arr1[4]={1,2,3,4};
//	int arr2[4]={0};
//	int i=0;
//productExceptSelf(arr1,4,arr2);
//for(i=0;i<4;i++)
//{
//   printf("%d ",arr2[i]);
//}
//system("pause");
//return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int main()
//{
//char *str1="abcd";
//char *str2="bnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn";
//strcpy(str2,str1);
//printf("%s",str2);
//system("pause");
//return 0;
//}
//模拟实现mommove
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void* my_memmove(void* str1,void * str2,int count)
//{
//  void*p=str1;
//   while(count--)
//   {
//   *((char*)str1+count)=*((char*)str2+count);
//   
//   
//   }
//return p;
//
//}
//int main()
//{
//	int arr1[]={1,2,3,4,5,6,7,8};
//	int i=0;
//    my_memmove(arr1+2,arr1,16);
//	for(i=0;i<8;i++)
//	{
//	printf("%d ",arr1[i]);
//	}
//	system("pause");
//return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	const char *a = "t12345";
//	char b[5]={0};
//	
//	for (i = 0; i < 3; i++)
//	    {
//		  printf("请输入密码\n");
//		  
//		  scanf("%s",b);
//		 
//		  if (!strcmp(a,b))//strcmp :比较俩个字符串 相等返回0，不等返回1；！为逻辑反操作即：变真为假，变假为真
//		   {
//			printf("密码输入正确\n");
//			break;
//		   }
//		  else
//		     {
//	
//			 printf("密码错误，请重新输入\n");
//			 
//		      }
//	    }
//	     if (i == 3)
//			    {
//				  printf("退出程序\n");
//				
//	      }
//	system("pause");
//	return 0;
//}
//模拟实现strncmp
#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//
//int my_strncmp(char *s1,char *s2,int count)
//{
//	
//    while(count--)
//	{
//	   if(*s1==*s2&&*s1&&*s2)
//	   {
//	   s1++;
//	   s2++;
//	   }
//	   
//
//return s2-s1;
//}
//int main()
//{
//  char* str1="asdfgh";
//  char* str2="asdfg";
// printf("%d\n",my_strncmp(str1,str2,6));
//
//system("pause");
//return 0;
//
//}
#include<string.h>
int main()
{
	char c='j';
	gets(c);
		
	if((c>='a')&&(c<='z'))
		{
			c-=32;
		}
		else 
		if((c>='A')&&(c<='Z'))
		{
			c+=32;
		}
		
	
		puts(c);
	system("pause");
	return 0;
}
