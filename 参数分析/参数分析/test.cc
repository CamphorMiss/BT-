#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string ret;
    vector<string> v;
    while(cin>>ret)
    {
        //引号不要就是了...
        if(ret[0]=='\"')
        ret=ret.substr(1,ret.rfind('\"')-1);
        v.push_back(ret);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}