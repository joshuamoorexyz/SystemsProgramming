   

//   Student Name:Joshua Moore
//  Student NetID: jjm702
// Compiler Used: vim with gcc
//Program Description:This program reads an unspecified number of strings and displays them in the
// reverse order they were entered
//
 //#include "list.c"
 //#include "list.h"
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>


#define MAX 10

//define all variable here
int main(){
char S[MAX][10], str[10];
//init stack
int i, top = -1;
int *top1;


//read string until STOP
printf("The program will read strings until STOP is entered");
printf("\n");

for (i=0;i<MAX; i++) {
scanf("%s", str);
if (strcmp(str, "STOP")) {
break;
} else {

if (*top1 == MAX -1) {
printf("\nStack is full : ");
} else {

*top1=*top1 +1;
strcpy(S[*top1], str);
}}}




//inform the user that the data will now be displayed in reverse
printf("\n");
printf("The data that was entered will now be dispalyed in reverse");
//display all the strings in reverse
printf("\n");

for (i=0;i< MAX; i++) {

if (*top1 == -1) {
printf("\nStack is empty :");}
else {
strcpy(str, S[*top1]);
*top1 = *top1 -1;
}

printf("\n%s", str);
}
return 0;
}



