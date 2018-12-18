#define _CRT_SECURE_NO_WARNINGS 1
/*1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。*/ 
//#include<stdio.h>
//#include<stdlib.h>
//#define ROW 12
//int main()
//{
//int i=0;
//int j=0;
//for(i=1;i<=ROW;i++)
//{
//   for(j=1;j<=i;j++)
//   {
//   printf("%d*%d=%d ",j,i,j*i);
//   }
//printf("\n");
//}
//system("pause");
//return 0;
//}
//
//2.使用函数实现两个数的交换。 
//#include<stdio.h>
//#include<stdlib.h>
//void my_swap(int *p1,int *p2)
//{
//*p1=*p1^*p2;
//*p2=*p1^*p2;
//*p1=*p1^*p2;
//
//}
//
//int main()
//{
//int a=0;
//int b=0;
//printf("请输入a的值：");
//scanf("%d",&a);
//printf("请输入b的值：");
//scanf("%d",&b);
//my_swap(&a,&b);
//printf("a=%d,b=%d\n",a,b);
//system("pause");
//return 0;
//}
//3.实现一个函数判断year是不是润年。 
//#include<stdio.h>
//#include<stdlib.h>
//int leap(int i)
//{
//return ((i%100!=0)&&(i%4==0)||i%400==0);
//}
//
//int main()
//{
//int year;
//int ret=0;
//scanf("%d",&year);
//ret=leap(year);
//if(ret==1)
//printf("是闰年\n");
//else
//printf("不是闰年\n");
//system("pause");
//return 0;
//}
//4. 
//创建一个数组， 
//实现函数init（）初始化数组、 
//实现empty（）清空数组、 
//实现reverse（）函数完成数组元素的逆置。 
//要求：自己设计函数的参数，返回值。
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void init(int* p,int k)
{
int i=0;
for(i=0;i<k;i++)
{
   *(p+i)=6;

}

}
int main()

{
int arr[10]={0};
int i=0;
init(arr,10);
for(i=0;i<10;i++)
{
printf("%d\n",arr[i]);

}


system("pause");
return 0;
}//
//5.实现一个函数，判断一个数是不是素数。


//#include<stdio.h>
//#include<stdlib.h>
//int sushu(int a)
//{
//int i=0;
//for(i=2;i<a;i++)
//{
//if(a%i==0)
//return 0;
//}
//return 1;
//}
//int main()
//{
//int num=0;
//int ret=0;
//scanf("%d",&num);
//ret=sushu(num);
//if(ret==1)
//printf("是素数\n");
//else
//printf("不是素数\n");
//system("pause");
//return 0;
//}