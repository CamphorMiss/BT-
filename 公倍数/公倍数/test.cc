#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    while(cin>>a>>b)
    {
        //两数的乘积再处于两数最大公约数就完事了
        int num=a*b;
        int ret=0;
        while(b)//公约数求法，
        {
            ret=a%b;
            a=b;
            b=ret;
        }
        cout<<num/a<<endl;
    }
    return 0;
}