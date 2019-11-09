#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4;
    int a,b,c;
    while(cin>>n1>>n2>>n3>>n4)
    {
        a=(n1+n3)/2;
        b=(n2+n4)/2;
        c=n4-b;
        if((a-b==n1)&&(b-c==n2)&&(a+b==n3)&&(b+c==n4))
            cout<<a<<" "<<b<<" "<<c;
        else
            cout<<"No";
    }
    return 0;
}