#include<iostream>
#include<string>
using namespace std;
int main()
{
    string shortstr,longstr;
    while(cin>>shortstr>>longstr)
    {
        if(shortstr.size()>longstr.size())
        {
            string ret1=shortstr;
            shortstr=longstr;
            longstr=ret1;
        }
        string llong;
        string ret;
        for(int i=1;i<=shortstr.length();i++)
        {
            for(int j=0;j<=shortstr.length()-i;j++)
            {
                ret=shortstr.substr(j,i);
                if(longstr.find(ret)!=string::npos)//´æÔÚ
                {
                    llong=ret;
                    break;
                }
            }
        }
        cout<<llong<<endl;
    }
    return 0;
}