#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str;
	vector<string> ve;
	while(getline(cin,str))
	{
		string temp="";
		string order="";
		for(int i=0;i<str.size();i++)
		{
			if(str[i]==' ')//空格之前的内容
			{
				if(!temp.empty())
					ve.push_back(temp);
				temp.clear();

			}
			else if(str[i]=='"')//引号
			{
				i++;
				while(str[i]!='"')
				{
					temp.push_back(str[i]);
					i++;
				}
			}
			else
				temp.push_back(str[i]);
		}
		if(!temp.empty())
		{
			ve.push_back(temp);
		}
		cout<<ve.size()<<endl;
		for(int j=0;j<ve.size();j++)
		{
			cout<<ve[j]<<endl;
		}

	}

	return 0;
}/*
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main()
 {
 int n,m;
 vector<int> ve(m+1,100001);
 while(cin>>n>>m)
 {
 ve[n]=0;
 for(int i=0;i<=m;i++)
 {
 for(int j=2;j*j<=i;j++)
 {
 if(i%j==0)
 {
 if(i+j<=m)
 ve[i+j]=min(ve[i+i/j],ve[i]+1);

 }
 }
 }
 if(ve[m]==100001)
 {
 cout<<"-1"<<endl;
 }
 else{
 cout<<ve[m]<<endl;
 }
 }
 return 0;
 }