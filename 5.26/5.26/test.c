#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void guess()
{
	int num = rand() % 2;
	while (1)
	{
		int n = 0;
		printf("������һ��0��100������");

		scanf("%d", &n);
		if (n == num)
		{
			printf("�¶���\n");
			break;

		}

		else if (n < num)
			printf("��С��\n");
		else
			printf("�´���\n");
	}
}

void meue()
{
	int ret = 0;
	while (1)
	{
	printf("***********************\n");
	printf("**1.����Ϸ 2.�˳���Ϸ**\n");
	printf("***********************\n");
	
	printf("��ѡ��\n");
	scanf("%d", &ret);
	
		if (ret == 1)
			guess();
		else if (ret == 2)
			break;
		else
			printf("�����������������\n");

	}

}

int main()
{
	
	srand((unsigned int)time(NULL));
	
	meue();
	system("pause");
	return 0;
}
