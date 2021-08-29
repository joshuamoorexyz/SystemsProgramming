 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

//use a value the input should never reach
#define buf 1024

//define new type stack with array and pointer set top to null
typedef struct Stack{
    char data[buf];
    struct Stack *next;
    
}Stack;

Stack *top=NULL;


