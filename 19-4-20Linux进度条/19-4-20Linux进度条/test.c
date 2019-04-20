#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define BLUE "\e[0;34m"
int main()
{
	int i=0;
	char arr[102];
	memset(arr,0,sizeof(arr));
	const char*ptr="|/-\\";
	for(;i<=100;i++)
	{
		printf(BLUE"[%-100s][%d%%][%c]\r",arr,i,ptr[i%4]);
		fflush(stdout);
		arr[i]='*';
		usleep(10000);
	}
	printf("\n");
	return 0;

}
