#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        size_t pos=str.find('-',0);
        string s1=str.substr(0,pos);
        string s2=str.substr(pos+1);
        if(s1=="joker JOKER"||s2=="joker JOKER")
        {
            cout<<"joker JOKER"<<endl;
            break;
        }
        int n1=0,n2=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
                n1++;
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==' ')
                n2++;
        }
        if(n1==n2)
        {
            int l1=s1.size();
            int l2=s2.size();
            if(s1[l1-1]>s2[l2-1])
            cout<<s1<<endl;
            else 
                cout<<s2;
        }
        else{
            //长度不等
            if(s1.size()==7||s2.size()==7)//有没有炸弹？？？？
            {
                string temp=s1.size()==7?s1:s2;
                cout<<temp<<endl;
            }
            else
                cout<<"ERROR"<<endl;
        }
    }
    return 0;
}