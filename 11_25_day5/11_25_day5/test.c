#define _CRT_SECURE_NO_WARNINGS 1
//1.��ɲ�������Ϸ��


#include"game.h"


void memu()
{
printf("****************************************\n");
printf("****************************************\n");
printf("******1.������Ϸ       0.�˳���Ϸ*******\n");
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
printf("��ѡ��\n");
scanf("%d",&input);
switch(input)
     {
case 0:
	printf("�˳��ɹ���\n");
	break;
case 1:
	playgame();
	break;
default:
	printf("����������������룡");
	break;
}
}
system("pause");
return 0;
}