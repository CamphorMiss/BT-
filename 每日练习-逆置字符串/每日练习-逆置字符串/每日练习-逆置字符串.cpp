#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//int main() {
//	string str;
//	while (getline(cin, str)) {
//		reverse(str.begin(), str.end());
//		int i = 0, j = i;
//		while (i < str.size()) {
//			while (i < str.size() && str[i] == ' ')
//				++i;
//			j = i;
//			while (i < str.size() && str[i] != ' ')
//				++i;
//			reverse(str.begin() + j, str.begin() + i);
//			j = i;
//		}
//		cout << str << endl;
//	}
//	return 0;
//}

int main()
{
	string str;
	int i=0;
	int j = 0;
	getline(cin,str);
	int pos=0;

	reverse(str.begin(),str.end());

	while(i<str.size())
	{
		while(i<str.size()&&str[i]==' ')
		{
			++i;
			j = i;
		}
		while (i < str.size() && str[i] != ' ')
		{
			++i;
			
		}
		reverse(str.begin()+j,str.begin()+i);
	}
	cout<<str<<endl;
	return 0;
}