#define _CRT_SECURE_NO_WARNINGS 1
1. 
дһ���������ز����������� 1 �ĸ��� 
���磺 15 0000 1111 4 �� 1 
����ԭ�ͣ� 
int count_one_bits(unsigned int value) 
{ 
// ���� 1��λ�� 
} 


#include<stdio.h>
#include<stdlib.h>
int function(int n)
{
int count=0;
while(n)
{
n=n&(n-1);
count++;
}
return count;
}
int main()
{
int a=0;
printf("��������һ������\n");
scanf("%d",&a);
printf("%d\n",function(a));
system("pause");
return 0;
}
2.��ȡһ�������������������е�ż��λ������λ�� 
�ֱ�������������С� 

#include<stdio.h>
#include<stdlib.h>
void fun1(int n)
{
int i=0;
int j=0;
printf("�����У�\n");
for(i=30;i>=0;i-=2)
{
printf("%d ",(n>>i)&1);
}
printf("\n");
printf("ż���У�\n");
for(j=31;j>=1;j-=2)
{

printf("%d ",(n>>j)&1);
}
printf("\n");
}

int main()
{
int a=0;
printf("������һ������ ");
scanf("%d",&a);
fun1(a);
system("pause");
return 0;
}
3. ���һ��������ÿһλ�� 

#include<stdio.h>
#include<stdlib.h>
void fun2(int n)
{
if(n>=10)
{
fun2(n/10);
}
printf("%d\n",n%10);
}
int main()
{
int a=0;
printf("������һ��������");
scanf("%d",&a);
fun2(a);
system("pause");
return 0;
}
4.���ʵ�֣� 
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
��������: 
1999 2299 
�������:7	

#include<stdio.h>
#include<stdlib.h>
int fun3(int n,int m)
{
int i=0;
int temp=0;
int count=0;
temp=n^m;
for(i=0;i<32;i++)
{
if(((temp>>i)&1)==1)
count++;
}
return count;
}
int main()
{
	int num1=0;
	int num2=0;
	printf("��������������");
	scanf("%d%d",&num1,&num2);
	printf("%d\n",fun3(num1,num2));

  system("pause");
return 0;
}
�� 


