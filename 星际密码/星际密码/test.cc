// write your code here cpp
//СС���Դ������д����ɻ󣡣�����������ҹ����ҷ���,Ȼ�������ͻᷢ�����Ȼ�Ǹ�쳲���������.......
#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int main()
{
    v.push_back(1);
    v.push_back(1);
    int n=0,ret=0;
    for(int i=2;i<10001;i++)
    {
        v.push_back((v[i-1]+v[i-2])%10000);
    }
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>ret;
            printf("%04d",v[ret]);
        }
        printf("\n");
    }
    return 0;
}