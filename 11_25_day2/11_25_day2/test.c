#define _CRT_SECURE_NO_WARNINGS 1

1. �����������α�����ֵ��������ֵ�����ݽ��н����� 
2. ����������ʱ���������������������ݣ������⣩ 
3.��10 �����������ֵ�� 
4.�����������Ӵ�С����� 
5.�������������Լ����
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=10;
int b=20;
int ret=0;
ret=a;
a=b;
b=ret;

printf("a=%d\n",a);
printf("b=%d\n",b);
system("pause");

return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=10;
int b=20;
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\n",a);
printf("b=%d\n",b);
system("pause");

return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=10;
int b=20;
a=a^b;
b=a^b;
a=a^b;
printf("a=%d\n",a);
printf("b=%d\n",b);
system("pause");

return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10]={0};
	int i=0;
	int max=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=1;i<10;i++)
	{
	max=arr[0];
	if(arr[i]>max)
	{
	max=arr[i]^max;
	arr[i]=arr[i]^max;
	max=arr[i]^max;
	}
	}
	printf("�������ǣ�%d\n",max);
	system("pause");
return 0;
}
#include<stdio.h>
#include<stdlib.h>
void my_swap(int* x,int* y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;


}

int main()
{
int a=0;
int b=0;
int c=0;
scanf("%d%d%d",&a,&b,&c);
if(b>a)
my_swap(&b,&a);
if(c>a)
my_swap(&c,&a);

if(c>b)
my_swap(&c,&b);
printf("%d %d %d",a,b,c);
system("pause");
return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=0;
int b=0;
int num=1;
scanf("%d%d",&a,&b);
while(num>0)
{
num=a%b;
a=b;
b=num;
}
printf("���Լ���ǣ�%d\n",a);
system("pause");
return 0;
}