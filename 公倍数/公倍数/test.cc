#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    while(cin>>a>>b)
    {
        //�����ĳ˻��ٴ����������Լ����������
        int num=a*b;
        int ret=0;
        while(b)//��Լ���󷨣�
        {
            ret=a%b;
            a=b;
            b=ret;
        }
        cout<<num/a<<endl;
    }
    return 0;
}