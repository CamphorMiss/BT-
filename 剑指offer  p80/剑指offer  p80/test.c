#include<stdio.h>
#include<stdlib.h>
//int  TESTFun1(int num)//二进制中1的个数
//{//这种方法负数就会进入死循环！不可取
//int count=0;
//while(num)
//{
//if(num&1)
//++count;
//num=num>>1;
//
//}
//return count;
//}

int TESTFun2(num)//可以应对负数，注意循环条件
{
	int count=0;
	unsigned int ret=1;
	while(ret)
	{
		  if(num&ret)
		  ++count;
		  ret=ret<<1;

	}
	return count;
}
int TESTFun3(num)
{
	int count=0;
	while(num)
	{
		++count;
		num=num&(num-1);
	}
	return count;
}
int main()
{
	int num=0;
	scanf("%d",&num);
	printf("%d\n",TESTFun3(num));
	system("pause");
	return 0;
}