#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
	char arr[102];
	int i=0;
	const char* ptr="|/-\\";
	memset(arr,0,sizeof(arr));
	printf("\033[?25l\033[47m");//
	printf("%116s\r");
	fflush(stdout);
	printf("\033[0m");
	for(;i<=100;i++)
	{
		printf("\033[42m\033[1m");
		printf("%s%d%% \r\033[0m",arr,i);
		fflush(stdout);
		usleep(100001);
		arr[i]=' ';
	}
	printf("\033[32m\033[1m\033[0m");
	printf("\n\033[?25h");
	return 0;
