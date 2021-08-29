
#include "list.h"
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>



int push(char data[])
{

    //allocate on the heap
  Stack *newStackPtr = malloc(sizeof(Stack));

//stop program before writing to out of bounds
  if(newStackPtr==NULL){
      
  printf("%s", "There was a problem pushing to the stack\n");
  return 0;
}
    

  }
  else{
      //cpy string to array
    strcpy(newStackPtr->data,data);
    //move pointer
    newStackPtr->next=top;
    top=newStackPtr;
    return 1;
  }

}




//print out the content of the array
void display(){
 int i=0;
 Stack *temp =top;
   printf("%s", temp->data);
   temp =temp->next;
}


void copy(char data[]){
    strcpy(data, top->data);
}


int pop(char data[])
{
  if (top== NULL)
  {
        printf("%s", "There was a problem popping the stack\n");
  return 0;
    
    
  }
  else{
      //clear data from the array
    copy(data);
    Stack *next = top->next;

    //memory from malloc freed here
    free(top);
    top=next;
    return 1;
    
  }
}





