// write your code here cpp
#include<iostream>
//��׺���ʽ�����е����㰴��������ֵ�˳�򣬴������ң����ڿ������ȼ�
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
			//������
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