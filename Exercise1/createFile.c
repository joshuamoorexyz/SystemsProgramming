

//student NetID: jjm702
 //* Compiler Used: vim with g++
 //*  * Program Description:This program generates a set of random numbers from three rangers and stores them in a binary file usying system calls


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<errno.h>

#define BUF_SIZE 1024

//createFile 
//createFile <filename> <number>
//createFile <filename> <number> <low value> <middle value> <high value>



//<filename> - name of the binary file, if the value isn't specified default it to flowData.dat
//<number> - total number of values to generate, if this value isn't specified default it to 60
//<low value> - the average value of the lower range, if this value isn't specified default it to 5
//<middle value> - the average value of the middle range, if this value isn't specified default it to 10
//<high value> - the average value of the upper range, if this value isn't specified default it to 15

int main( int argc, char *argv[] ){
int inputFd, outputFd, openFlags;
mode_t filePerms;
ssize_t numRead;
char buf[BUF_SIZE];

srand(time(NULL));

//define filedescriptors
inputFd = open(argv[1], O_RDONLY);

if (inputFd == -1){
    perror("open for read");
    exit(EXIT_FAILURE);
}

openFlags = O_CREAT | O_WRONLY | O_TRUNC;
filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;

outputFd = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;

outputFd = open(argv[2], openFlags, filePerms);

if (outputFd ==-1)
{
    perror("open for write");
    exit(EXIT_FAILURE);
}


// while ((numRead = read(inputFd, buf, BUF_SIZE)) >0){
//     if(write(outputFd,buf,numRead)!=numRead){
//         perror("write");
//         exit(EXIT_FAILURE);
//     }
// }
if (numRead ==-1)
{
    perror("read");
    exit(EXIT_FAILURE);
}

close(inputFd);
close(outputFd);

//process commandline arguments
if(argc==0)
{
    char *filename="flowData.dat";
    int number=60;
    int lowvalue=5;
    int middlevalue=10;
    int highvalue=15;

int random_number0 = rand() % 100 + 0;

//needs to be between -.5 and .5
signed int random_number1 = 1 *rand() /(RAND_MAX/2)-1;


//loop until all the numbers are written to the file 

//write to the file
ssize_t write(int fd,const void* buffer,size_t count);



//close the file
int close(int fd);



}
if(argc ==2){
    //printf("You gave %s\n", argv[1]);
char *filename=argv[0];
int arg2=atoi(argv[1]);

int random_number0 = rand() % 100 + 0;


//needs to be between -.5 and .5
signed int random_number1 = 1 *rand() /(RAND_MAX/2)-1;






}
else if(argc ==5){
    //printf("You gave %s\n", argv[1]);
char *filename=argv[0];
int arg2=atoi(argv[1]);
int arg3=atoi(argv[2]);
int arg4=atoi(argv[3]);
int arg5=atoi(argv[4]);

int random_number0 = rand() % 100 + 0;


//needs to be between -.5 and .5
signed int random_number1 = 1 *rand() /(RAND_MAX/2)-1;







}
else if(argc > 5){
    perror("Too many arguements supplied \n");
    exit(EXIT_FAILURE);
    
}
else if(argc <0){
    perror("Too few arguements supplied \n");
    exit(EXIT_FAILURE);

}






    





return 0;
}





//loop while all the numbers haven't been written to the file
//
//
//generate a random number between 0 and 100 to determine which range to use
//
//
//generate a random number between -.5 and .5 to create the offset
//
//
//create the value to be stored by
//
//
//adding the offset to the chosen range's average
//
//
//multiplying the resulting number by 100
//
//
//
//truncating the number to an integer
//
//
//use a union to convert the newly created integer to a 4 byte character buffer
//
//
//
//output the character buffer.
//
//
//
//
//The odds of each range being written into the file of random numbers are fixed.
//
//The lower range is written into the file if a random number between 0 and 15 is generated;
//
//the upper range is written into the file if a random number between 85 and 100 is generated;
//
//all other values should be in the middle range.
