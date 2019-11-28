#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2;
    while(cin>>str1>>str2)
    {
        int count=0;
    for(int i=0;i<=str1.length();i++)
    {
        string ret1=str1;
        ret1.insert(i,str2);
        string ret2=ret1;
        reverse(ret1.begin(),ret1.end());
        if(ret1==ret2)
            count++;
    }
        cout<<count<<endl;
    }
}