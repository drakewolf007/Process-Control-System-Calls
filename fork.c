#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	int id,wt;
	id = fork();
	
	if(id == 0)
	{
		printf("Child - My ID is : %d\n", getpid());
		printf("Child - My Parent's ID is : %d\n", getppid());
		execl("./app", "app", "argc", "argv[1]", NULL);
		exit(34);
	}
	else if(id > 0)
	{
		wait(&wt);
		printf("Parent - My ID is : %d\n", getpid());
		printf("Parent - My Parent ID is : %d\n", getppid());
		
		if (WIFEXITED(wt))
		{
			printf("The child has terminated normally and it's exit status is %d\n", WEXITSTATUS(wt));
		}
		else if(WIFSIGNALED(wt))
		{
			printf("The child has terminated abnormally and is killed by signal %d\n", WTERMSIG(wt));
		}
	}
}
