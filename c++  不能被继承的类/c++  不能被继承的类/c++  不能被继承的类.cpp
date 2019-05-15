#include<iostream>
using namespace std;
class A//C++98中的方法，把基类的构造函数给成私有的，派生类调用不辽它，无法继承
{
public:
	static A GetA()//静态函数，不然只能作为类的成员函数调用，则必须要先有类的对象
	{
		return A();
	}
private:
	A()
	{
		//此处构造函数
	}
	int num;
};
class B final//c++11中，用final防止类被继承
{
//......
};
int main()
{

	return 0;
}