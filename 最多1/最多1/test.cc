#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int b=0;
    while(cin>>b)
    {
     int maxcount=0;
    int nowcount=0;
        while(b){
        if(b&1==1)
        {
            nowcount++;
            maxcount=max(nowcount,maxcount);
        }
        else
            nowcount=0;
        b>>=1;
    }
    cout<<maxcount<<endl;
    }
    return 0;
}