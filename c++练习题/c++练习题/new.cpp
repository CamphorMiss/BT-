// write your code here cpp
#include<iostream>
//后缀表达式：所有的运算按运算符出现的顺序，从左至右，不在考虑优先级
#include<stack>
using namespace std;
int main()
{
	stack<char> s1;
	char ret[100];
	while(getline(cin,ret))
	{
	
		if(ret>='0'&&ret<='9')
		{
			ret-='0';
			s1.push(ret);
		}
		else{
			//操作符
			int a,b,c;
			a=s1.top();
			s1.pop();
			if(s1.empty())
				cout<<a;
			b=s1.top();
			s1.pop();
			switch(ret){
			case '+':c=a+b;
				break;
			case '-':c=a-b;
				break;
			case '*':c=a*b;
				break;
			case '/':c=a/b;
				break;
			default:
				break;
			}
			s1.push(c+'0');
		}
	}
	return 0;
}