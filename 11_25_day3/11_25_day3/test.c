#define _CRT_SECURE_NO_WARNINGS 1
/*1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
3. */��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>
#include<stdlib.h>
int main()
{

	int arr1[5]={1,3,5,7,9};
	int arr2[5]={2,4,6,8,0};
  int i=0;
  for(i=0;i<5;i++)
  {
	  arr1[i]=arr1[i]^arr2[i];
	  arr2[i]=arr1[i]^arr2[i];
	  arr1[i]=arr1[i]^arr2[i];

  }
  printf("arr1 ");
  for(i=0;i<5;i++)
  {
  printf("%d ",arr1[i]);
  }
  printf("\n");
  printf("arr2 ");
   for(i=0;i<5;i++)
  {
  printf("%d ",arr2[i]);
  }
   printf("\n");
   system("pause");
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	float sum=0;
	float flag=1.00;
		for(i=1;i<=100;i++)
		{
		sum*=flag;
		flag=-flag;
		sum+=1.000/i;
		
		}
printf("sum=%f\n",sum);
system("pause");
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=0;
int count=0;
for(i=1;i<=100;i++)
{
if(i/10==9)
count++;
if(i%10==9)
count++;
}
printf("count=%d",count);
system("pause");
return 0;
}
