#include<iostream>
using namespace std;
int count(int n)
{
    int ret=0;
    for(int i=1;i<=n;i++)
    {
        //产生n以内的数
        int num=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                num+=j;
        }
        if(num==i)
            ret++;
    }
    return ret;
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<count(n)<<endl;
    }
    return 0;
}