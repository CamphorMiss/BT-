#define _CRT_SECURE_NO_WARNINGS 1
1. 
写一个函数返回参数二进制中 1 的个数 
比如： 15 0000 1111 4 个 1 
程序原型： 
int count_one_bits(unsigned int value) 
{ 
// 返回 1的位数 
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
printf("请先输入一个数：\n");
scanf("%d",&a);
printf("%d\n",function(a));
system("pause");
return 0;
}
2.获取一个数二进制序列中所有的偶数位和奇数位， 
分别输出二进制序列。 

#include<stdio.h>
#include<stdlib.h>
void fun1(int n)
{
int i=0;
int j=0;
printf("奇数列：\n");
for(i=30;i>=0;i-=2)
{
printf("%d ",(n>>i)&1);
}
printf("\n");
printf("偶数列：\n");
for(j=31;j>=1;j-=2)
{

printf("%d ",(n>>j)&1);
}
printf("\n");
}

int main()
{
int a=0;
printf("请输入一个数： ");
scanf("%d",&a);
fun1(a);
system("pause");
return 0;
}
3. 输出一个整数的每一位。 

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
printf("请输入一个整数：");
scanf("%d",&a);
fun2(a);
system("pause");
return 0;
}
4.编程实现： 
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
输入例子: 
1999 2299 
输出例子:7	

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
	printf("请输入两个数：");
	scanf("%d%d",&num1,&num2);
	printf("%d\n",fun3(num1,num2));

  system("pause");
return 0;
}
。 


