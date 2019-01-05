#define _CRT_SECURE_NO_WARNINGS 1
1.递归和非递归分别实现求第n个斐波那契数。 

#include<stdio.h>
#include<stdlib.h>
int fib(int i)
{
if(i<=2)
return 1;
else
return (fib(i-1)+fib(i-2));
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fib(n));
system("pause");
return 0;
#include<stdio.h>
#include<stdlib.h>
int fib(int i)
{
int a=0;
int b=0;
int c=1;
if(i>2)
{
c=a+b;
a=b;
b=c;

}
return c;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fib(n));
system("pause");
return 0;
}
2.编写一个函数实现n^k，使用递归实现
#include<stdio.h>
#include<stdlib.h>
int power(int n,int k)
{ 
if(k<=0)
return 1;
else
return n*power(n,k-1);

}
int main()
{
int n;
int k;
int ret=0;
scanf("%d%d",&n,&k);
ret=power(n,k);
printf("%d\n",ret);
system("pause");
return 0;
}


3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 


#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
if(n<10)
return n;
else
return n%10+DigitSum(n/10);


}
int main()
{

int n=0;
int ret=0;
scanf("%d",&n);
ret=DigitSum(n);
printf("%d\n",ret);
system("pause");
return 0;
}
4. 编写一个函数 reverse_string(char * string)（递归实现） 
实现：将参数字符串中的字符反向排列。 
要求：不能使用C函数库中的字符串操作函数。 

5.递归和非递归分别实现strlen
#include<stdio.h>
#include<stdlib.h>
int mystrlen1(char* p)
{
int count=0;
while(*p!='\0'){
count++;
p++;
}
return count;

}
int mystrlen2(char *p1)
{
  int count=0;
  if(*p1!='\0'){
	  p1++;
   count=1+mystrlen2(p1);
  }
  return count;
  }
int main()
{
char *s1="abcdef";
int long1=0;
int long2=0;
long1=mystrlen1(s1);
long2=mystrlen2(s1);
printf("%d\n",long1);
printf("%d\n",long2);
system("pause");
return 0;
}
6.递归和非递归分别实现求n的阶乘
#include<stdio.h>
#include<stdlib.h>
int fac(int x)
{
int i;
int j=1;
for(i=1;i<=x;i++)
{
j*=i;
}
return j;
}
int fac2(int x)
{
if(x==1)
return 1;
else
return x*fac(x-1);

}
int main()
{
int n=0;
int ret=0;
scanf("%d",&n);
ret=fac(n);
printf("%d\n",ret);
printf("%d\n",fac2(n));
system("pause");
return 0;
}
7.递归方式实现打印一个整数的每一位
#include<stdio.h>
#include<stdlib.h>
void prints(int a)
{
if(a>10){
prints(a/10);
	}
printf("%d ",a%10);

}
int main()
{
	int n;
	scanf("%d",&n);
prints(n);
system("pause");
return 0;
}

