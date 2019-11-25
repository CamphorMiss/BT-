#include<iostream>
using namespace std;
int Gettotal(int month)
{//两个月之后才会有新兔子
    if(month==1||month==2)
        return 1;
    return Gettotal(month-1)+Gettotal(month-2);
}
int main()
{
    int month=0;
    while(cin>>month)
    {
        cout<<Gettotal(month)<<endl;
    }
    return 0;
}