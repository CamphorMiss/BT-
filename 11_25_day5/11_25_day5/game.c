#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void playgame()
{

int in=0;
int num=0;

num=rand()%100;
while(1)
{
printf("������֣�\n");
scanf("%d",&in);
if(num==in){
printf("��ϲ�㣡������\n");
break;
}

if(num<in){
printf("�´��ˣ����ٲ�һ��\n");
}
if(num>in){
printf("��С�ˣ����ٲ�һ��\n");
}
}
}
