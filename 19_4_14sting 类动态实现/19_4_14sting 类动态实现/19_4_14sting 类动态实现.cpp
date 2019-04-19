#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
namespace bit {
	class string
	{
	public:
		string(const char* s = "")
		{
			if (nullptr == s)
			{
				_str = (char *) "";
			}
			else
			{
				_str = new char[strlen(s) + 1];
				_size = strlen(s);
				_capacity = _size;
				strcpy(_str, s); //WIN32; _DEBUG; _CONSOLE; % (PreprocessorDefinitions)
			}
		}

		string(const string& s)
			:_str(new char[strlen(s._str)+1])
		{
			strcpy(_str,s._str);
			_size = strlen(s._str);
			_capacity = _size;
		}
		string(size_t n,char c)
			:_str(new char[n+1])
		{
			size_t i = 0;
			for (i = 0; i < n; i++)
			{
				_str[i] = c;
			}
			_size = n;
			_capacity = _size;
		}
		~string()
		{
			if (_str)
			{
              delete[] _str;
			  _str = nullptr;
			}
		}
		char& operator[](size_t pos)
		{
			if (pos < 0 || pos >= _size)
			{
				cout << "下标越界！" << endl;
			}
			return _str[pos];
			
		}
		void AddCapacity()//扩容
		{
			char *ret = new char[_capacity*2];
			strcpy(ret, _str);
			delete[] _str;
			_str = ret;
			_capacity *= 2;
			_size = _size;
		}
		void pushback(char c)//尾插字符
		{//需要判断是否扩容
			if(_size>=_capacity)
			{ 
				AddCapacity();
			}
			_str[_size++] = c;
			_str[_size] = '\0';

			
		}
		string & append(const char* s)//在字符串后追加字符串
		{
			if(nullptr!=s)
			{size_t lens = strlen(s);//判断空间是否够
			size_t empty = _capacity - _size;
			while (lens > empty)
			{
				AddCapacity();
			}
			strcpy(_str + _size, s);
			}
			
			return *this;
		}
		string &operator+=(const string& s)//和上面有区别？？？？？？
		{
			size_t rlen = strlen(s._str);
			size_t empty= _capacity - _size;
			while (rlen > empty)
			{
				AddCapacity();
			}
			strcpy(_str+_size,s._str);
			return *this;
		}
		string &operator+=(char c)
		{
			pushback(c);
		}
		const char*c_str()const//返回C格式的字符串
		{
			return _str;
		}
		size_t find(char c,size_t pos = 0)const//从pos位置往后开始找C，返回该位置
		{
			size_t i = 0;
			for (i = pos; i < _size; i++)
			{
				if (_str[i] == c)
					return i;
			}
			return -1;//没找到
		}
		size_t rfind(char c, size_t pos)                                                
		{
			int i = _size-1;
			for (i = pos; i >0; i--)
			{
				if (_str[i] == c)
					return i;
			}
			return -1;//没找到
		}
		friend ostream operator<<(ostream &os, string &s);
		friend ostream operator>>(ostream &os, string &s);
		int Getsize()const
		{
			return _size;
		}

		int Getcapacity()const
		{
			return _capacity;
		}

	private:
		char* _str;
		int _size;
		int _capacity;
	};
	ostream operator<<(ostream &os, string &s)
	{
		cout << s._str << endl;
		return ;
	}
	ostream operator>>(ostream &os, string &s)
	{
		cin >> s._str;
		return ;
	}

}

void Testfun()
{
	bit::string s1("xiao ming");
	bit::string s2(s1);
	bit::string s3(3,'!');
	s1.pushback('s');
	cout >> s1;
	cout >> s2;
	cout >> s3;

}
int main()
{
	Testfun();

	system("pause");
	return 0;
}