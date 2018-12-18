#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void playgame()
{

int in=0;
int num=0;

num=rand()%100;
while(1)
{
printf("请猜数字！\n");
scanf("%d",&in);
if(num==in){
printf("恭喜你！猜中了\n");
break;
}

if(num<in){
printf("猜大了，请再猜一次\n");
}
if(num>in){
printf("猜小了，请再猜一次\n");
}
}
}
