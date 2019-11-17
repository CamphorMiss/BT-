#include<iostream>
#include<algorithm>
using namespace std;
bool Fun(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n=0;
    while(cin>>n)
    {
        int i=0;
        for(i=n/2;i<n;i++)
        {
            if(Fun(i)&&Fun(n-i))
            {
                break;
            }
        }
        cout<<n-i<<endl;
        cout<<i<<endl;
    }
}