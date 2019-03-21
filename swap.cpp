#include"pch.h"
#include<iostream>

using namespace std;
void swap(int &ra, int &rb)
{
	int temp = ra;
	ra = rb;
	rb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	cout <<"交换前： "<<"a="<< a << "   b=" << b<<endl;
	int &ra = a;
	int &rb = b;
	swap(ra,rb);
	cout <<"交换后：" <<"a=" << a << "  b=" << b << endl;
	return 0;
}