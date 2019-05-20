#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string longstr;
	string shortstr;
	getline(cin,longstr);
	getline(cin,shortstr);
	for (auto i = longstr.begin(); i != longstr.end(); ++i)
	{
		auto ret = find(shortstr.begin(), shortstr.end(), (*i));
		if (ret != shortstr.end())
		{
			longstr.erase(i);
			--i;
		}
	}
	cout << longstr << endl;
	return 0;
}