

//student NetID: jjm702
 //* Compiler Used: vim with gcc
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
#include <stdint.h>


#define FLOAT_TO_INT(x) ((x)>=0?(int)((x)+0.5):(int)((x)-0.5))

uint8_t read_file_byte(FILE *fptr){
  uint8_t data;
  fread(&data, 1, 1, fptr);
  return data;
}
int main( int argc, char *argv[] ){





FILE *fptr;







//process commandline arguments
if(argc==1)
{
    char *filename="flowData.dat";
    int number=60;
    int lowvalue=5;
    int middlevalue=10;
    int highvalue=15;
    int count=0;
    char *bytes[4];


fptr=fopen(filename,"w");


//use union to convert to 4 byte char buf
//   for(int i=0;i<4;i++){
//  newInt1[i]=dtob.bytes[i];
// printf("%s",newInt1);

//  }

//loop until all the numbers are written to the file 

while(count<=number){

char c='\n';
//printf("%s","HEY");
    srand(time(NULL));



int random_number0 = rand() % 100 + 0;

//printf("%i", random_number0);
 //printf("\n");


//needs to be between -.5 and .5
float LO=-.5;
float HI=.5;



    float scale = rand() / (float) RAND_MAX; 
    float r3=LO + scale * ( HI - LO );      
//printf("%f",r3);
// printf("\n");

    float newVal=random_number0+r3*100;
    unsigned int newInt;
    newInt=FLOAT_TO_INT(newVal);
//printf("%i", newInt);
 //printf("\n");

unsigned long n = newInt;


*bytes[0] = (n >> 24) & 0xFF;
bytes[1] =  calloc(4,(n >> 16) & 0xFF);
bytes[2] = calloc(4,(n >> 8) & 0xFF);
bytes[3] = calloc(4,(n) & 0xFF);


printf("%p %p %p %p", bytes[3], bytes[2], bytes[1], bytes[0]);
 

if(*bytes[3]>=0 && *bytes[3]<=15){
 

    

 //printf("%s", "Testing");
 //printf("\n");

 //write to file


 
       putw(lowvalue, fptr);
       putc(c,fptr);
      


}
if(*bytes[3]>=85 && *bytes[3]<=100){

//printf("%s", "Testing1");
 //rintf("\n");


//write to file
//write to file
//   if (fptr != NULL) {
//     printf("File created successfully!\n");
//   }
//   else {
//     printf("Failed to create the file.\n");
//     // exit status for OS that an error occurred
//     return -1;
//   }
       putw(highvalue, fptr);
             putc(c,fptr);
// inBytes(filename, number);
//fclose(fptr);
 //inBytes(filename, number);
}
if(*bytes[3]>15 && *bytes[3]<85){
//mid value

 //printf("%s", "Testing2");
 //printf("\n");


//write to file
  //fptr = fopen(filename, "w");
//   if (fptr != NULL) {
//     printf("File created successfully!\n");
//   }
//   else {
//     printf("Failed to create the file.\n");
//     // exit status for OS that an error occurred
//     return -1;
//   }
       putw(lowvalue, fptr);
       putc(c,fptr);
      // fclose(fptr);
 //inBytes(filename, number);

}

count++;


}


fclose(fptr);
  fptr=fopen(filename, "rb");
  unsigned short sample;
  fseek(fptr, 0, SEEK_END);
  long tam = ftell(fptr);
  rewind(fptr);
  long c = 0;
  while(c!=tam){
    sample = read_file_byte(fptr);
    printf("\n");
    printf("%i", *bytes[3]);
    c++;
  }
  fclose(fptr);



}


if(argc ==3){
    //printf("You gave %s\n", argv[1]);
char *filename=argv[1];
int number=atoi(argv[2]);
    int lowvalue=5;
    int middlevalue=10;
    int highvalue=15;
    int count=0;
   
char *bytes[4];
FILE *fptr;


while(count<=number){

char c='\n';
//printf("%s","HEY");
    srand(time(NULL));



int random_number0 = rand() % 100 + 0;

//printf("%i", random_number0);
 //printf("\n");


//needs to be between -.5 and .5
float LO=-.5;
float HI=.5;



    float scale = rand() / (float) RAND_MAX; 
    float r3=LO + scale * ( HI - LO );      
//printf("%f",r3);
// printf("\n");

    float newVal=random_number0+r3*100;
    unsigned int newInt;
    newInt=FLOAT_TO_INT(newVal);
//printf("%i", newInt);
 //printf("\n");

unsigned long n = newInt;


*bytes[0] = (n >> 24) & 0xFF;
bytes[1] =  calloc(4,(n >> 16) & 0xFF);
bytes[2] = calloc(4,(n >> 8) & 0xFF);
bytes[3] = calloc(4,(n) & 0xFF);


printf("%p %p %p %p", bytes[3], bytes[2], bytes[1], bytes[0]);
 

if(*bytes[3]>=0 && *bytes[3]<=15){
 

    

 //printf("%s", "Testing");
 //printf("\n");

 //write to file


 
       putw(lowvalue, fptr);
       putc(c,fptr);
      


}
if(*bytes[3]>=85 && *bytes[3]<=100){

//printf("%s", "Testing1");
 //rintf("\n");


//write to file
//write to file
//   if (fptr != NULL) {
//     printf("File created successfully!\n");
//   }
//   else {
//     printf("Failed to create the file.\n");
//     // exit status for OS that an error occurred
//     return -1;
//   }
       putw(highvalue, fptr);
             putc(c,fptr);
// inBytes(filename, number);
//fclose(fptr);
 //inBytes(filename, number);
}
if(*bytes[3]>15 && *bytes[3]<85){
//mid value

 //printf("%s", "Testing2");
 //printf("\n");


//write to file
  //fptr = fopen(filename, "w");
//   if (fptr != NULL) {
//     printf("File created successfully!\n");
//   }
//   else {
//     printf("Failed to create the file.\n");
//     // exit status for OS that an error occurred
//     return -1;
//   }
       putw(lowvalue, fptr);
       putc(c,fptr);
      // fclose(fptr);
 //inBytes(filename, number);

}

count++;


}


fclose(fptr);
  fptr=fopen(filename, "rb");
  unsigned short sample;
  fseek(fptr, 0, SEEK_END);
  long tam = ftell(fptr);
  rewind(fptr);
  long c = 0;
  while(c!=tam){
    sample = read_file_byte(fptr);
    printf("\n");
    printf("%i", *bytes[3]);
    c++;
  }
  fclose(fptr);






int random_number0 = rand() % 100 + 0;






return 0;


}
 if(argc ==6){
    //printf("You gave %s\n", argv[1]);
char *filename=argv[1];
int number=atoi(argv[2]);
    int lowvalue=atoi(argv[3]);
    int middlevalue=atoi(argv[4]);
    int highvalue=atoi(argv[5]);
    int count=0;
char *bytes[4];


   
int random_number0 = rand() % 100 + 0;

while(count<=number){

char c='\n';
//printf("%s","HEY");
    srand(time(NULL));



int random_number0 = rand() % 100 + 0;

//printf("%i", random_number0);
 //printf("\n");


//needs to be between -.5 and .5
float LO=-.5;
float HI=.5;



    float scale = rand() / (float) RAND_MAX; 
    float r3=LO + scale * ( HI - LO );      
//printf("%f",r3);
// printf("\n");

    float newVal=random_number0+r3*100;
    unsigned int newInt;
    newInt=FLOAT_TO_INT(newVal);
//printf("%i", newInt);
 //printf("\n");

unsigned long n = newInt;


*bytes[0] = (n >> 24) & 0xFF;
bytes[1] =  calloc(4,(n >> 16) & 0xFF);
bytes[2] = calloc(4,(n >> 8) & 0xFF);
bytes[3] = calloc(4,(n) & 0xFF);


printf("%p %p %p %p", bytes[3], bytes[2], bytes[1], bytes[0]);
 

if(*bytes[3]>=0 && *bytes[3]<=15){
 

    

 //printf("%s", "Testing");
 //printf("\n");

 //write to file


 
       putw(lowvalue, fptr);
       putc(c,fptr);
      


}
if(*bytes[3]>=85 && *bytes[3]<=100){

//printf("%s", "Testing1");
 //rintf("\n");


//write to file
//write to file
//   if (fptr != NULL) {
//     printf("File created successfully!\n");
//   }
//   else {
//     printf("Failed to create the file.\n");
//     // exit status for OS that an error occurred
//     return -1;
//   }
       putw(highvalue, fptr);
             putc(c,fptr);
// inBytes(filename, number);
//fclose(fptr);
 //inBytes(filename, number);
}
if(*bytes[3]>15 && *bytes[3]<85){
//mid value

 //printf("%s", "Testing2");
 //printf("\n");


//write to file
  //fptr = fopen(filename, "w");
//   if (fptr != NULL) {
//     printf("File created successfully!\n");
//   }
//   else {
//     printf("Failed to create the file.\n");
//     // exit status for OS that an error occurred
//     return -1;
//   }
       putw(lowvalue, fptr);
       putc(c,fptr);
      // fclose(fptr);
 //inBytes(filename, number);

}

count++;


}


fclose(fptr);
  fptr=fopen(filename, "rb");
  unsigned short sample;
  fseek(fptr, 0, SEEK_END);
  long tam = ftell(fptr);
  rewind(fptr);
  long c = 0;
  while(c!=tam){
    sample = read_file_byte(fptr);
    printf("\n");
    printf("%i", *bytes[3]);
    c++;
  }
  fclose(fptr);


//needs to be between -.5 and .5
//signed int random_number1 = 1 *rand() /(RAND_MAX/2)-1;



//printf("%s", "Testing5");



return 0;

}
if(argc > 6){
    perror("Too many arguements supplied \n");
    exit(EXIT_FAILURE);
    
}
if(argc <0){
    perror("Too few arguements supplied \n");
    exit(EXIT_FAILURE);

}








return 0;
}



