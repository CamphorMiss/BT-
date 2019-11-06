#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int> arr;
        arr.resize(3*n);
        for(int i=0;i<arr.size();i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long sum=0;
        for(int i=n;i<=arr.size()-2;i+=2)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
        return 0;
    }
}