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
	printf("��������ʼ���");
	scanf("%d",&year1);
	printf("��������ֹ���");
	scanf("%d",&year2);
	if(year1>=year2)
	{
	 printf("����������ʼ��ݲ�С����ֹ��ݣ�\n");
	 return 0;
	}
	for(int i=year1;i<year2;i++){
		if(Isleap(i)==0)
	     printf("%d\n",i);
	}
	return 0;
}
