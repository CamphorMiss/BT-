#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,nowstr,maxstr;
    while(cin>>str)//��OS��??????? ����Ϊ��Ҫ������������������whileһֱ����������ʲô����������
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