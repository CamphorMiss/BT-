#define _CRT_SECURE_NO_WARNINGS 1

//��������Ϊ n ���������� nums������ n > 1������������� output 
//���� output[i] ���� nums �г� nums[i] ֮�������Ԫ�صĳ˻���


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
//ģ��ʵ��mommove
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
//		  printf("����������\n");
//		  
//		  scanf("%s",b);
//		 
//		  if (!strcmp(a,b))//strcmp :�Ƚ������ַ��� ��ȷ���0�����ȷ���1����Ϊ�߼���������������Ϊ�٣����Ϊ��
//		   {
//			printf("����������ȷ\n");
//			break;
//		   }
//		  else
//		     {
//	
//			 printf("�����������������\n");
//			 
//		      }
//	    }
//	     if (i == 3)
//			    {
//				  printf("�˳�����\n");
//				
//	      }
//	system("pause");
//	return 0;
//}
//ģ��ʵ��strncmp
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
