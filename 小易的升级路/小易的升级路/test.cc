#include<iostream>
#include<vector>
using namespace std;
int Common(int n1,int n2)
{
    int n3=0;
    while(n2)
    {
        n3=n1%n2;
        n1=n2;
        n2=n3;
    }
   return n1;
}
int main()
{
    int n=0,a=0;
    while(cin>>n>>a){
        vector<int>v;
        int ret;
        for(int i=0;i<n;i++){
            cin>>ret;
            v.push_back(ret);
        }
        int num;
        for(int i=0;i<v.size();i++){
            if(a>=v[i]){
                a+=v[i];
            }
            else{
                num=Common(a,v[i]);
                a+=num;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}