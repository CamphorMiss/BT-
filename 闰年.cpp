#include<stdio.h>
int Isleap(int year)
{
	if(year%400==0||(year%4==0&&year%100!=0))
	return 0;
	else
	return 1;
}
int main()
{
	int year;
	printf("请输入要判断的年数 ：");
	scanf("%d",&year);
	if(Isleap(year)==0)
	printf("%d 是闰年\n",year);
	else
	printf("%d 不是闰年\n",year);
	return 0;
}
