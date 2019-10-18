//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n=0;
//	bool letter=true;
//	bool length=true;
//	cin>>n;
//	string s1;
//	string s2;
//	cin>>s1;
//	for(int i=0;i<n-1;i++)
//	{
//		 >>s2;
//		letter=(letter&&(s1<s2));
//		length=(length&&(s1.size()<s2.size()));
//		s1=s2;
//
//	}
//
//	if(letter&&!length)
//		cout<<"lexicographically"<<endl;
//	else if(!letter&&length)
//		cout<<"lengths"<<endl;
//	else if(letter&&length)
//		cout<<"both"<<endl;
//	else
//		cout<<"none"<<endl;
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
char* reverse_string(char * str)
{
	assert(str);
	int left = 0;
	int right = my_strlen(str) - 1;
	char* ret = str;
	while (left < right)
	{
		char ch = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = ch;
		left++;
		right--;
	}
	return ret;
}
int main()
{
	char ch[6] = {'a','b','c','d','e','f'};
	reverse_string(ch);
	printf("%s", ch);
	system("pause");
	return 0;
}


