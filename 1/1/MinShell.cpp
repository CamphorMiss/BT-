#include<iostream>
#include<string>
#include<stdlib.h>
//#include<cstdio>
//#include<unistd.h>
//#include<string.h>
//#include<assert.h>
//#include<sys/wait.h>
#define num 32
#define size 256
using namespace std;
//void Function1(char *cmd,char *end[])
//{
//	assert(cmd);
//	assert(end);
//	int i=0;
//	end[i++]=strtok(cmd," ");
//	while(end[i])
//	{
//		end[i++]=strtok(NULL," ");
//
//	}
//}
//void Function2(char* end[])
//{
//	assert(end);
//	pid_t id=fork();
//	if(id==0)
//	{
//		execvp(end[0],end);
//		perror("fork");
//	}
//	else
//	{
//		wait(NULL);//回收子进程
//	}
//}
//int main()
//{
//	//moni minglinghangjieshiqi
//	string ret="[zzzz@home/...]@ ";
//	char* end[num]={NULL};
//	while(1)
//	{
//		char cmd[size];
//		cout<<ret;
//		fgets(cmd,sizeof(cmd)-1,stdin);
//		cmd[strlen(cmd)-1]=0;
//		Function1(cmd,end);//chuli zifuchuan
//		Function2(end);//chuangcan
//	}
//
//	return 0;
//}
int main()
{
  char *ret="qwertyui";
  cout<<ret<<endl;
  system("pause");
  //Sleep(5);
  return 0;
}