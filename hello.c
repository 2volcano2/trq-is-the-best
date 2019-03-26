#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
int main(int argc,char*argv[])
{
	while(1)
	{
		printf("hello world\n");
		sleep(1);
	}
	return 0;
}
