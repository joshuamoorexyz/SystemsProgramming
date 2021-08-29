#include "list.hpp"

using namespace std;

//push to the stack
bool Stack::push(string item)
{
    //make sure we are not out of bounds
if (top >= (MAX-1)){
cout <<"Stack Overflow";
return false;

}
else {
    //increment and store input in stack
myStack[++top] = item;
return true;
}
}
void Stack::pop()
{
    //check bounds
if (top < 0) {
cout <<"Stack Underflow";
}
else {
    //decrement top
string item = myStack[top--];
}

}

bool Stack::Display(){
    //loop and display all elements of stack
for(int i=top;i>=0;i--){
cout<<myStack[i];
cout<<endl;
}
return true;
}

bool Stack::Delete(){
    //clean up
delete [] myStack;
return true;
}


