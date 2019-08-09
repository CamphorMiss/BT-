#include<iostream>
using namespace std;
int Fun(int a,int b)
{
	while(a%b)
	{
		int ret=a;
		a=b;
		b=ret%b;
	}
	return b;
}
int main()
{//最小公倍数=积/最大公约数
	int a=0;
	int b=0;
	cin>>a>>b;
	cout<<(a*b/Fun(a,b))<<endl;
	return 0;

}