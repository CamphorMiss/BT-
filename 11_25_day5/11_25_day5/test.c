#define _CRT_SECURE_NO_WARNINGS 1
//1.完成猜数字游戏。


#include"game.h"


void memu()
{
printf("****************************************\n");
printf("****************************************\n");
printf("******1.进入游戏       0.退出游戏*******\n");
printf("****************************************\n");
printf("****************************************\n");
}

int main()
{
int input=1;
srand((unsigned)time(NULL));
while(input)
   {
memu();
printf("请选择！\n");
scanf("%d",&input);
switch(input)
     {
case 0:
	printf("退出成功！\n");
	break;
case 1:
	playgame();
	break;
default:
	printf("输入错误，请重新输入！");
	break;
}
}
system("pause");
return 0;
}