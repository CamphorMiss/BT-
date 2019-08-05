#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void guess()
{
	int num = rand() % 2;
	while (1)
	{
		int n = 0;
		printf("请输入一个0至100的数：");

		scanf("%d", &n);
		if (n == num)
		{
			printf("猜对了\n");
			break;

		}

		else if (n < num)
			printf("猜小了\n");
		else
			printf("猜大了\n");
	}
}

void meue()
{
	int ret = 0;
	while (1)
	{
	printf("***********************\n");
	printf("**1.玩游戏 2.退出游戏**\n");
	printf("***********************\n");
	
	printf("请选择：\n");
	scanf("%d", &ret);
	
		if (ret == 1)
			guess();
		else if (ret == 2)
			break;
		else
			printf("输入错误，请重新输入\n");

	}

}

int main()
{
	
	srand((unsigned int)time(NULL));
	
	meue();
	system("pause");
	return 0;
}
