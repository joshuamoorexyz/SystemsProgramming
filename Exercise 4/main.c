/*


//student NetID: jjm702
 // Compiler Used: vim with gcc
 //  * Program Description:This program creates a child process.The parent and child performs different tasks
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){



pid_t childPID;
//setup all signal handlers



//returns -1 on error
//returns 0 in child
//returns the process id of the child in the parent


switch(childPID=fork())
{

	case -1:
		perror("fork");
		exit(EXIT_FAILURE);
	case 0:
		//child
		printf("we are in the child lets play");
		printf("\n");
		usleep(2000000);
		printf("exiting child");
		exit(EXIT_SUCCESS);
	default: //parent
		printf("we are in the parent");
		printf("\n");
		printf("we will wait on the child at child pid %d",childPID);
		printf("\n");
		while(1){
			//wait
			childPID=wait(NULL);
			if(childPID==-1){
				if(errno=ECHILD){
					printf("Our last child has stopped. Goodbye");
					printf("\n");
					exit(EXIT_SUCCESS);
				}}
			else{
				perror("Wait");
				exit(EXIT_FAILURE);
			}}
}









return(0);
}
