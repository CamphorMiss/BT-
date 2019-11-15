//n列m行  递归
#include<iostream>
#include<vector>
using namespace std;
int Fun(int x,int y)
{//终点为（0，0）  起点就是（n,m）
    if(x==0||y==0)//有x或者y等于0，则接下来只有1条走法了
        return 1;
    return Fun(x-1,y)+Fun(x,y-1);//往终点走就完事了，冲鸭！
}
int main()
{
    int m=0,n=0;
    while(cin>>n>>m)
        cout<<Fun(n,m)<<endl;
    return 0;
}