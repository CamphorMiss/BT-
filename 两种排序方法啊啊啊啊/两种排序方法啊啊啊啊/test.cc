#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool IsSort1(vector<string> &ss)//字典排序
{
    for(int i=0;i+1<ss.size();i++)
    {
        if(ss[i].compare(ss[i+1])>0)
            return false;
    }
    return true;
}
bool IsSort2(vector<string> &ss)//长度排序
{
     for(int i=0;i+1<ss.size();i++)
    {
        if(ss[i].size()>ss[i+1].size())
            return false;
    }
    return true;
}
int main()
{
    int n=0;
    vector<string> ss;
    cin>>n;
	string str;
    for(int i=0;i<n;i++)//手动微笑，我不气
    {
        cin>>str;
		ss.push_back(str);
    }
    if(IsSort1(ss)&&IsSort2(ss))
        cout<<"both"<<endl;
    else if(IsSort1(ss))
        cout<<"lexicographically"<<endl;
    else if(IsSort2(ss))
        cout<<"lengths"<<endl;
    else
        cout<<"none"<<endl;
    return 0;
}