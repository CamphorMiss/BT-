#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void handle(int sig)
{
	printf("sig is :%d\n",sig);
}
int main()
{
	sigset_t set,oset,pen;
	int flag=0;
	signal(2,handle);
	sigemptyset(&set);//chushihua
	sigemptyset(&pen);

	sigaddset(&set,2);
	sigprocmask(SIG_BLOCK,&set,&oset);

	while(1)
	{
		sigpending(&pen);
		int i=1;
		for(;i<32;i++)
		{
			if(sigismember(&pen,i))
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
		sleep(1);
		flag++;
		if(flag>5)
		{
			sigprocmask(SIG_SETMASK,&oset,NULL);
		}
	}
	return 0;
}