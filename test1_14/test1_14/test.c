#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
static int j;
void fun1(void)
{
	static int i = 0;
	i ++;
}
void fun2(void)
{
	j = 0;
	j++;
}
int main()
{
	int k=0;
	for(k=0; k<10; k++)
	{
		fun1();
		fun2();
	}
	//printf("i=%d  j=%d",i,j);
	system("pause");
	return 0;
}
//100000000000000000000000 00001010
//011111111111111111111111 11101100
//111111111111111111111111 11110110