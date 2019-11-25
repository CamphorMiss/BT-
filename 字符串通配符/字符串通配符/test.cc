#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,other;
    while(cin>>other>>str)
    {
        bool flag=false;
        int i=0,j=0;
        for(;str[i]!='\0'||other[j]!='\0';)
        {
            if(other[j]=='*'){
                j++;
                flag=true;
            }
            else if(str[i]==other[j]||other[j]=='?'){
                i++;j++;
            }
            else if(flag==true){
                while(str[i]!=other[j]){
                    i++;
                }
                flag=false;
            }
            else{
                //cout<<"false"<<endl;
                break;
            }
        }
        if(str[i]=='\0'&&other[j]=='\0')
        cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}