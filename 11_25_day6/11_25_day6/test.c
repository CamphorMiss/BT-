#define _CRT_SECURE_NO_WARNINGS 1
/*1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���*/ 
//#include<stdio.h>
//#include<stdlib.h>
//#define ROW 12
//int main()
//{
//int i=0;
//int j=0;
//for(i=1;i<=ROW;i++)
//{
//   for(j=1;j<=i;j++)
//   {
//   printf("%d*%d=%d ",j,i,j*i);
//   }
//printf("\n");
//}
//system("pause");
//return 0;
//}
//
//2.ʹ�ú���ʵ���������Ľ����� 
//#include<stdio.h>
//#include<stdlib.h>
//void my_swap(int *p1,int *p2)
//{
//*p1=*p1^*p2;
//*p2=*p1^*p2;
//*p1=*p1^*p2;
//
//}
//
//int main()
//{
//int a=0;
//int b=0;
//printf("������a��ֵ��");
//scanf("%d",&a);
//printf("������b��ֵ��");
//scanf("%d",&b);
//my_swap(&a,&b);
//printf("a=%d,b=%d\n",a,b);
//system("pause");
//return 0;
//}
//3.ʵ��һ�������ж�year�ǲ������ꡣ 
//#include<stdio.h>
//#include<stdlib.h>
//int leap(int i)
//{
//return ((i%100!=0)&&(i%4==0)||i%400==0);
//}
//
//int main()
//{
//int year;
//int ret=0;
//scanf("%d",&year);
//ret=leap(year);
//if(ret==1)
//printf("������\n");
//else
//printf("��������\n");
//system("pause");
//return 0;
//}
//4. 
//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢 
//ʵ��empty����������顢 
//ʵ��reverse���������������Ԫ�ص����á� 
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void init(int* p,int k)
{
int i=0;
for(i=0;i<k;i++)
{
   *(p+i)=6;

}

}
int main()

{
int arr[10]={0};
int i=0;
init(arr,10);
for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);

}


system("pause");
return 0;
}//
//5.ʵ��һ���������ж�һ�����ǲ���������


//#include<stdio.h>
//#include<stdlib.h>
//int sushu(int a)
//{
//int i=0;
//for(i=2;i<a;i++)
//{
//if(a%i==0)
//return 0;
//}
//return 1;
//}
//int main()
//{
//int num=0;
//int ret=0;
//scanf("%d",&num);
//ret=sushu(num);
//if(ret==1)
//printf("������\n");
//else
//printf("��������\n");
//system("pause");
//return 0;
//}