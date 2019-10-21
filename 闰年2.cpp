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
	int year1,year2;
	printf("请输入起始年份");
	scanf("%d",&year1);
	printf("请输入终止年份");
	scanf("%d",&year2);
	if(year1>=year2)
	{
	 printf("输入有误，起始年份不小于终止年份！\n");
	 return 0;
	}
	for(int i=year1;i<year2;i++){
		if(Isleap(i)==0)
	     printf("%d\n",i);
	}
	return 0;
}
