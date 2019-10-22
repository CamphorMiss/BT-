//#include <iostream>
//using namespace std;
//// int main()
//// {
////	 /*int a[4]={0};
////
////	 for(auto& i:a)
////	 cin>>i;
////	 for(auto j:a)
////	 cout<<j<<"=mi"<<endl;*/
////	 int array[]={1,2,3,4,5};
////	 for(auto& e:array)
////	   e*=2;
////	 for(auto e:array)
////		 cout<<e<<endl;
////	 system("pause");
////	 return 0;
//// }
//#include<iostream>
////#include"pch.h"
//
//using namespace std;
////日期类
////class Date
////{
////public:
////	void display()
////	{
////		cout << _year << "-" << _month << "-" << _day << endl;
////	}
////private:
////	int _year;
////	int _month;
////	int _day;
////};
////int main()
////{
////	Date d1;
////	d1.display();
////
////	return 0;
////}
//int main()
//{
//	int count=3;
//	int &_count=count;//为count变量取一个别名_count,可以通过别名去改变变量值
//	_count=8;
//	cout<<"count="<<count<<endl;
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include<stdlib.h>
void Search(int *arr,int size)
{
	int i=0;
	int num=0;
	int pos=0;
	int k1=0;
	int k2=0;
	for(i=0;i<size;i++)
	{
		num^=*(arr+i);

	}
	//此时num中是出现一次的两个数异或的结果
	for(i=0;i<32;i++)
	{
        if(((num>>i)^1)==0)
		{
			pos=i;
		   break;
		}
      }
	//此时pos中记录的是异或结果中第一次出现1的位置，根据pos位置上
	//数字的不同，可分为两个子数组
	for(i=0;i<size;i++)
	{
		if(((arr[i]>>pos)&1)==0)
			k1^=arr[i];
		else
			k2^=arr[i];
	}
	printf("这两数是 :%d  %d\n",k1,k2);
}

int main()
{
	int array[10]={1,2,3,4,5,6,4,3,2,1};
	int len=sizeof(array)/sizeof(array[0]);
	Search(array,len);
    system("pause");
    return 0;
}