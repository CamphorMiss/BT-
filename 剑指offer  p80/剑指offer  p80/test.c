#include<stdio.h>
#include<stdlib.h>
//int  TESTFun1(int num)//��������1�ĸ���
//{//���ַ��������ͻ������ѭ��������ȡ
//int count=0;
//while(num)
//{
//if(num&1)
//++count;
//num=num>>1;
//
//}
//return count;
//}

int TESTFun2(num)//����Ӧ�Ը�����ע��ѭ������
{
	int count=0;
	unsigned int ret=1;
	while(ret)
	{
		  if(num&ret)
		  ++count;
		  ret=ret<<1;

	}
	return count;
}
int TESTFun3(num)
{
	int count=0;
	while(num)
	{
		++count;
		num=num&(num-1);
	}
	return count;
}
int main()
{
	int num=0;
	scanf("%d",&num);
	printf("%d\n",TESTFun3(num));
	system("pause");
	return 0;
}