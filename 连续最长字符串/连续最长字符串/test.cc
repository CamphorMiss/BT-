#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,nowstr,maxstr;
    while(cin>>str)//我OS：??????? 我以为你要输入多组测试用例，加while一直错，我做错了什么？？？？？
	{
		maxstr.clear();
        for(int i=0;i<=str.length();i++)
        {
            nowstr.clear();
            while(i<=str.length()&&str[i]>='0'&&str[i]<='9'){
                nowstr+=str[i];
                i++;
            }
            if(maxstr.length()<nowstr.length())
                maxstr=nowstr;
            }
        cout<<maxstr<<endl;
	}
    return 0;
}