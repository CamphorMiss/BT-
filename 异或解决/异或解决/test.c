#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n;
	int count=0;
	int ret;
	printf("��������������");
	scanf("%d %d",&m,&n);
	ret=m^n;
	while(ret)
	{
	ret=ret&(ret-1);
	count++;
    }
	printf("%d\n",count);
	system("pause");
	return 0;

}