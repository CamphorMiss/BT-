#define _CRT_SECURE_NO_WARNINGS 1
1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 

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
2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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


3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 


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
4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
ʵ�֣��������ַ����е��ַ��������С� 
Ҫ�󣺲���ʹ��C�������е��ַ������������� 

5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

