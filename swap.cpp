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
	cout <<"����ǰ�� "<<"a="<< a << "   b=" << b<<endl;
	int &ra = a;
	int &rb = b;
	swap(ra,rb);
	cout <<"������" <<"a=" << a << "  b=" << b << endl;
	return 0;
}