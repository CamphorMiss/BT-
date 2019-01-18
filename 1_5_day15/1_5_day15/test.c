#define _CRT_SECURE_NO_WARNINGS 1
1.一个数组中只有两个数字是出现一次， 
其他所有数字都出现了两次。 
找出这两个数字，编程实现。 

#include<stdio.h>
#include<stdlib.h>

int find_num(int *str,int len)
{
  int i=0;
  int ret=0;
  int pos=0;
  int x=0;
  int y=0;
  for(i=0;i<len;i++)
  {
  ret^=*(str+i);
  }
for(i=0;i<32;i++)
{
 if((ret>>i)&1==1)
	 pos=i;
}
for(i=0;i<len;i++)
{
  if(((*(str+i))>>pos)&1==1)
  {
  x^=*(str+i);

  }
  else
  {
  y^=*(str+i);
  }
}
printf("这两个数是：%d %d\n",x,y);
}
int main()
{
int arr[8]={1,2,3,4,5,3,2,1};
int sz=sizeof(arr)/sizeof(arr[0]);
find_num(arr,sz);
system("pause");
return 0;
}
2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
给20元，可以多少汽水。 
编程实现。 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int money=0;//钱
int total=0;//喝到的汽水数
int empty=0;//当前的空瓶数
printf("你有多少钱？\n");
scanf("%d",&money);
empty=money;
total=money;
while(empty>1)
{
total+=empty/2;
empty=empty/2+empty%2;
}
printf("小胖子，你可以喝到%d 瓶的汽水\n",total);
system("pause");
return 0;
}
3.模拟实现strcpy//复制

#include<stdio.h>
#include<stdlib.h>


char *my_strcpy(char * dest,const char*src)
{
	char *ret=dest;
while(*dest++=*str++)
{
;
}
return ret;
}
4.模拟实现strcat //链接
char * my_strcat(char * dest,const char * src)
{
	char * start=dest;
while(*dest!='\0')
{
  dest++;
}
while(*dest++=*src++)
{
;
}
return start;
}


