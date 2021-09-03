//student NetID: jjm702
 //* Compiler Used: vim with gcc
 //*  * Program Description: this program creates a directory structure for all of your files associated with the exercises, assignments, and tests.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<errno.h>
#include <stdint.h>
#include<string.h>

int PATH_MAX=1024;



//define createdirs func
//pass different strings when user passes
void createdirs(char *arg){

      int k;

do{

       //getcwd and check to see if it fails
          char cwd[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       
   } else {
       perror("getcwd() error");
       exit(EXIT_FAILURE);
   }
  //change to that root dir and create the different dirs
    chdir(cwd);
    mkdir(arg,00777);
    chdir(arg);
    mkdir("test/", 00777);
    chdir("test/");
    
        
         char dirname[50];
//loop over all dir creations
        for(int j=1;j<4;j++) {
               sprintf(dirname,"test%d",j);
                if((mkdir(dirname,00777))==-1) {
                       fprintf(stdout,"error in creating dir\n");
                       //exit(EXIT_FAILURE);
               }
         }

      //change to that root dir and create the different dirs

    chdir(cwd);
    mkdir(arg,00777);
    chdir(arg);
    mkdir("program/",00777);
    chdir("program/");
    
              char dirname1[50];

        for(int j=1;j<6;j++) {
               sprintf(dirname1,"program%d",j);
                if((mkdir(dirname1,00777))==-1) {
                       fprintf(stdout,"error in creating dir\n");}
                       //exit(EXIT_FAILURE);
    }
      //change to that root dir and create the different dirs

    chdir(cwd);
    mkdir(arg,00777);
    chdir(arg);
    mkdir("exercise/", 00777);
    chdir("exercise/");
    
         char dirname2[50];

        for(int j=1;j<11;j++) {
               sprintf(dirname2,"exercise%d",j);
                if((mkdir(dirname2,00777))==-1) {
                       fprintf(stdout,"error in creating dir\n");
                       //exit(EXIT_FAILURE);

    }


}



       k=1;
    }while(k!=1);}
         





//start of main func
int main( int argc, char *argv[] ){
 char *arg="sysProg";
if(!argv[1]){

createdirs(arg);


}
else{

//store the inputted string
char *arg=argv[1];


createdirs(arg);



}





return 0;
}