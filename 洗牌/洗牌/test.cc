#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)//tÎª×éÊý
    {
        int n,k;
        int ret=0;
        cin>>n>>k;
        vector<int>v1;
        for(int i=0;i<2*n;i++)
        {
            cin>>ret;
            v1.push_back(ret);
        }
        while(k--)
        {
            vector<int> v2(v1.begin(),v1.end());
            for(int i=0;i<n;i++)
            {
                v1[2*i+1]=v2[i+n];
                v1[2*i]=v2[i];
            }
        }
        for(int i=0;i<2*n-1;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<v1[2*n-1]<<endl;
    }
    return 0;
}