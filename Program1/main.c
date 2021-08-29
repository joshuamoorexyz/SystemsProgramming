   
/*
Student Name:Joshua Moore
Student NetID: jjm702
Compiler Used: vim with gcc
Program Description:This program reads an unspecified number of strings and displays them in the
reverse order they were entered
*/


 //#include "list.c"
 #include "list.c"
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>






int main(){

//define all variable here
 int count=0; 
 char string[buf];
//read string until STOP
printf("The program will read strings until STOP is entered");
printf("\n");

while(count<buf){
scanf("%s", string);
if(strcmp(string,"STOP") == 0){
   break;
}else{
push(string);


count++;   
}

}
//inform the user that the data will now be displayed in reverse
printf("\n");
printf("The data that was entered will now be dispalyed in reverse");
//display all the strings in reverse
printf("\n");
while(count>0){
display(string);
pop(string);

printf("\n");
count--;
}


return 0;
}



