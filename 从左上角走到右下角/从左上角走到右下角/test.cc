//n��m��  �ݹ�
#include<iostream>
#include<vector>
using namespace std;
int Fun(int x,int y)
{//�յ�Ϊ��0��0��  �����ǣ�n,m��
    if(x==0||y==0)//��x����y����0���������ֻ��1���߷���
        return 1;
    return Fun(x-1,y)+Fun(x,y-1);//���յ��߾������ˣ���Ѽ��
}
int main()
{
    int m=0,n=0;
    while(cin>>n>>m)
        cout<<Fun(n,m)<<endl;
    return 0;
}