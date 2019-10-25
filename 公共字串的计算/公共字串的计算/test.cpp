#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	string str2;
	int count=0,pos=0;
	int i,j;
	string ret;
	while(cin>>str1>>str2)
	{
		for(i=str1.size()-1;i>=0;i--)
		{
			for(j=0;j<str1.size();j++)
			{
				ret=str1.substr(j,i);
				pos=str2.find(ret);
				if(pos!=string::npos&&ret.size()>count)
					count=ret.size();

			}
		}
		cout<<count<<endl;
	}
	return 0;
}