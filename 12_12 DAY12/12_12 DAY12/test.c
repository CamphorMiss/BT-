//#define _CRT_SECURE_NO_WARNINGS 1
///*1.��д������ 
//unsigned int reverse_bit(unsigned int value); 
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��*/ 
//
//�磺 
//��32λ������25���ֵ�������и�λ�� 
//00000000000000000000000000011001 
//��ת�󣺣�2550136832�� 
//10011000000000000000000000000000 
//���������أ� 
//2550136832 
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int fun(int num)
//{
//		int temp=0;
//		int i=0;
//		int j=0;
//		int ret=0;
//		for(i=0;i<=32/2;i++)
//		{
//			ret=((num>>i)&1)*pow(2,31-i);
//			temp+=ret;
//		}
// return temp;
//}
//int main()
//{
//	int num=25;
//	printf("%u\n",fun(25));
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	for (i=0; i<32; i++)
//	{
//		if(value>>i&1)
//		{
//			ret |= (value>>i&1)<<(31-i);
//		}
//	}
//	return ret;
//}
// 
//int main()
//{
//	int a = 25;
//	int ret = 0;
//	ret = reverse_bit(a);
//	printf("%u\n", ret);//�˴�һ��Ҫ��%u.
//	system("pause");
//	return 0;
//}
//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int fun1(int m,int n)
//{
//	int num=0;
//	num=(m&n)+((m^n)>>1);
//
//	return num;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d",&a,&b);
//	printf("%d \n",fun1(a,b));
//	system("pause");
//	return 0;
//}
//3.���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ� 
//���ҳ�������֡���ʹ��λ���㣩 
//�ؼ��㣺һ�������Լ�������0  ��0���������Լ�
//
#include<stdio.h>
#include<stdlib.h>
int find(int* arr1)
{
int i=0;
int key=0;
int sz=strlen(arr1);
for(i=0;i<sz;i++)
{
   key^=*arr1;
   arr++;
}
return key;

}
int main()
{
	int arr[7]={1,2,3,4,3,2,1};
	printf("%d\n",find(arr));
system("pause");
return 0;
}
//4. 
//��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student". 
//Ҫ�� 
//����ʹ�ÿ⺯���� 
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� 
//˼·����ȫ����ת  �ٰ�ÿ��������ת
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//void swap(char* star,char *end)
//{
//	char ret=0;
//	assert(star!=NULL);
//	assert(end!=NULL);
//	while(star<end)
//	{
//   ret=*star;
//  *star=*end;
//  *end=ret;
//  star++;
//  end--;
//	}
//}
//void fun1(char *p)
//{
// int sz=strlen(p);
// swap(p,p+sz-1);//������ת
// while(*p!='\0')
// {
//	 char *star=p;
//	 char *end=star;
// while(*end!=' '&&*end!='\0')//ʵ��ÿ�����ʵ���ת
// {
//	 end++;
// }
// swap(star,end-1);
// if(*end!='\0')
// p=end+1;
// else
// p=end;
// }
//}
//int main()
//{
//char arr[]="student a am i";
//fun1(arr);
//printf("%s",arr);
//printf("\n");
//system("pause");
//return 0;
//}