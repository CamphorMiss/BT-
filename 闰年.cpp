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
	printf("������Ҫ�жϵ����� ��");
	scanf("%d",&year);
	if(Isleap(year)==0)
	printf("%d ������\n",year);
	else
	printf("%d ��������\n",year);
	return 0;
}
