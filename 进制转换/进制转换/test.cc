#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    string arr="0123456789ABCDEF";
    int m,n;
    while(cin>>m>>n)
    {
        for(;m!=0;m/=n)
        {
            //这里注意负数
            if(m<0)
            {
                m=-m;
                cout<<'-';
            }
            str1=arr[m%n]+str1;
        }
        cout<<str1<<endl;
    }
    return 0;
}