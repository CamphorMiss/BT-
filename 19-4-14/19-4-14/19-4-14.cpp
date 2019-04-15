//string 类的静态实现
#include<iostream>
#include<stdlib.h>
using namespace std;


class string
{
public:
	string(const char *str = "")//用字符串构造对象
	{
		if (nullptr == str)
			_str[0] = '\0';
		//若传参不为空，则为对象申请空间，然后，深拷贝
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	string(const string &s)//拷贝构造函数
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str,s._str);
	}
	string(size_t n, char c)
		:_str(new char[n]+1)
	{
		int i = 0;
			for (i = 0; i < n; i++)
			{
				_str[i] = c;
	         }
	}

	//运算符的重载
	//string operator+=

	char& operator[](size_t pos)
	{

		//size_t i = 0;
		///*while (++i == pos)
		//	return _str[pos];*/
		//for(i=0;i<)
		

		return _str[pos];
	}
	
private:
	char *_str;
};


void Testfun()
{

}
int main()
{
	Testfun();
	system("pause");
	return 0;
}