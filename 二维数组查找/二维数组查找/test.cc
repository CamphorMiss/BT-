#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
bool Find(int target, vector<vector<int> > array) {
        if(array.size()==0||array[0].size()==0)
            return false;
        int x=array[0].size()-1;
        int y=array.size()-1;
        int i=0;
        int j=array[0].size()-1;
        if(target<array[0][0]||target>array[y][x])
            return false;
        while(i<=y&&j>=0)
        {
            if(array[i][j]==target)
                return true;
            else if(array[i][j]<target)
                i++;
            else//相等了
                j--;
        }
        return false;
    }
int main()
{
	vector<vector<int>> arr(3);
	for(int i=0;i<arr.size();i++)
	{
	  for(int j=0;j<3;j++)
		  arr[i].push_back(i*j);
	}
	printf("%d\n",Find(0,arr));
	system("pause");
return 0;
}














for(int i=vinstar;i<=vinend;i++)
        {
            if(vin[i]==prestar)//找到一个根
            {
                root->left=CreatTree(pre,prestar+1,prestar+i-vinstar,vin,vinstar;i-1);
                root->right=CreatTree(pre,prestar+1+i-vinstar,preend,vin,i+1,vinend);
                break;
            }
        }