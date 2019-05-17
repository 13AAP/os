#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    pid_t n1 = fork(); 
    pid_t n2 = fork();
    pid_t n3 = fork();
    
    if (n1>0 && n2>0 && n3>0)
         printf("Parent: %d\n", (int) getpid());
    else
         printf("Child: %d, Parent %d\n", (int) getpid(), (int) getppid());

}

/*int main(){
    pid_t parent = getpid();
    char mypid[10];
    sprintf(mypid,"%d",parent);
    fork();
    fork();
    fork();
    wait(NULL);
    wait(NULL);
    wait(NULL);
    execlp("pstree","pstree",mypid,NULL);
    return 0;
}*/

/*int main() 
{ 
    pid_t pid1 = fork();
	pid_t pid2 = fork();
	pid_t pid3 = fork();
	if (pid1 == 0)
	{
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
		exit(0); 
	}
	if (pid2 == 0)
	{
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
		exit(0); 
	}
	if (pid2 == 0)
	{
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
		exit(0); 
	}
	wait(NULL);
	wait(NULL);
	wait(NULL); 
      
}*/ 

