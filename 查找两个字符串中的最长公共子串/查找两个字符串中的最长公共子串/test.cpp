#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	while(cin>>str1>>str2)
	{
		string str3;
		string str;
		int i=0;
		int j=0;
		if(str2.length()<str1.length())
		{
			str=str1;
			str1=str2;
			str2=str;
		}
		for(i=1;i<str1.size();i++)
		{
			for(j=0;j<=str1.size()-i;j++)
			{
				string ret=str1.substr(j,i);
				if(str2.find(ret)!=string::npos)
				{
					str3=ret;
					break;
				}
			}
		}
		cout<<str3<<endl;
	}
	return 0;
}