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
        int num=0,max=-(2^32-1);//��INT_MINҲ���ԣ�������Ҫ���Ǹ��������⣬���Բ�Ҫ��ֵ0
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