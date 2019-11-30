#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int num=0,max=-(2^32-1);//用INT_MIN也可以，这里主要考虑负数的问题，所以不要赋值0
        for(int i=0;i<n;i++)
        {
            num+=arr[i];
            if(max<num)
                max=num;
            if(num<0)
                num=0;
        }
    cout<<max<<endl;
    }
    return 0;
}