#define _CRT_SECURE_NO_WARNINGS 1
1. ��ӡ100~200֮������� 
2. ����˷��ھ��� 
3. �ж�1000��---2000��֮������� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=0;
int j=0;

for(i=101;i<200;i+=2)
{
   for(j=2;j<i;j++)
   {
   if(i%j==0)
   break;
   
   }
   printf("%d \n",i);
   
}
system("pause");
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	int j=0;
	for(i=1;i<=9;i++)
	{
	  for(j=1;j<=i;j++)
	  {
	  printf("%dx%d=%d ",j,i,j*i);
	  }
	  printf("\n");
	}
system("pause");
return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
int i=0;

for(i=1000;i<=2000;i++)
{
if((i%100!=0&&i%4==0)||i%400==0)
printf("%d�����꣡\n",i);

}
system("pause");
return 0;
}