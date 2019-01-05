//#define _CRT_SECURE_NO_WARNINGS 1
///*1.编写函数： 
//unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值value的二进制位模式从左到右翻转后的值。*/ 
//
//如： 
//在32位机器上25这个值包含下列各位： 
//00000000000000000000000000011001 
//翻转后：（2550136832） 
//10011000000000000000000000000000 
//程序结果返回： 
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
//	printf("%u\n", ret);//此处一定要用%u.
//	system("pause");
//	return 0;
//}
//2.不使用（a+b）/2这种方式，求两个数的平均值。 
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
//3.编程实现： 
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
//请找出这个数字。（使用位运算） 
//关键点：一个数与自己异或等于0  与0异或等于它自己
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
//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student". 
//要求： 
//不能使用库函数。 
//只能开辟有限个空间（空间个数和字符串的长度无关）。 
//思路：先全部逆转  再把每个单词逆转
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
// swap(p,p+sz-1);//整体逆转
// while(*p!='\0')
// {
//	 char *star=p;
//	 char *end=star;
// while(*end!=' '&&*end!='\0')//实现每个单词的逆转
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