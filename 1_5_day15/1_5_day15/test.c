#define _CRT_SECURE_NO_WARNINGS 1
1.һ��������ֻ�����������ǳ���һ�Σ� 
�����������ֶ����������Ρ� 
�ҳ����������֣����ʵ�֡� 

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
printf("���������ǣ�%d %d\n",x,y);
}
int main()
{
int arr[8]={1,2,3,4,5,3,2,1};
int sz=sizeof(arr)/sizeof(arr[0]);
find_num(arr,sz);
system("pause");
return 0;
}
2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� 
��20Ԫ�����Զ�����ˮ�� 
���ʵ�֡� 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int money=0;//Ǯ
int total=0;//�ȵ�����ˮ��
int empty=0;//��ǰ�Ŀ�ƿ��
printf("���ж���Ǯ��\n");
scanf("%d",&money);
empty=money;
total=money;
while(empty>1)
{
total+=empty/2;
empty=empty/2+empty%2;
}
printf("С���ӣ�����Ժȵ�%d ƿ����ˮ\n",total);
system("pause");
return 0;
}
3.ģ��ʵ��strcpy//����

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
4.ģ��ʵ��strcat //����
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


