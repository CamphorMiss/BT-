

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	int i = 0;
	int a_i;
	long long num = 0;
	cin >> n;
	vector<int> arr;
	for (i = 0; i < 3 * n; i++)
	{
		cin >> a_i;
		arr.push_back(a_i);

	}
	sort(arr.begin(), arr.end());
	for (i = 0; i < n; i++)
	{
		num += arr[i * 2 + n];
	}
	cout << num << endl;
	return 0;
}


