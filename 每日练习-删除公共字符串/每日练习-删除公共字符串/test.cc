#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;//
    getline(cin,str1);
    getline(cin,str2);
    for(int i=0;i<str1.size();i++)
    {
        if(str2.find(str1[i])==-1)//Ã»ÕÒµ½
            cout<<str1[i];
    }
    return 0;
}