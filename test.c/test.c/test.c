
#include<stdlib.h>
#include<stdio.h>
#define NUM 5
int main()
{
	int a[6]={3,5,4,7,1,6};
	int *p=&a[2];
	printf("%d",*p);/*
	int a[NUM],i,j,t;
	printf("ÇëÊäÈëÊı×éa£º");
	for(i=0;i<NUM;i++)
		scanf("%d",&a[i]);
	for(i=0;i<NUM;i++)
		for(j=0;j<NUM-i-1;j++)
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			for(i=0;i<NUM;i++)
		    printf("%d ",a[i]);
			printf("\n");*/
			system("pause");
			return 0;
}
