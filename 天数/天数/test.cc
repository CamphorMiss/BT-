#include<iostream>
int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
using namespace std;
int main()
{
    int year,month,day;
    while(cin>>year>>month>>day)
    {
            int result=day;
        for(int i=0;i<month-1;i++)
        {
            result+=arr[i];
        }
        if((year%400==0||(year%100!=0&&year%4==0))&&month>2)
          result++;
        cout<<result<<endl;
    }
    return 0;
}