#include<iostream>

using namespace std;

#define MAX 1000

class Stack
{
int top;
public:
//string myStack[MAX]; //stack array
string* myStack =new string[MAX];
Stack() {top = -1; }

bool push(string x);
void pop();
bool Display();
bool Delete();
};

bool Stack::push(string item)
{
if (top >= (MAX-1)){
cout <<"Stack Overflow";
return false;

}
else {
myStack[++top] = item;
return true;
}
}
void Stack::pop()
{
if (top < 0) {
cout <<"Stack Underflow";
}
else {
string item = myStack[top--];
}

}

bool Stack::Display(){
for(int i=top;i>=0;i--){
cout<<myStack[i];
cout<<endl;
}
return true;
}

bool Stack::Delete(){
delete [] myStack;
return true;
}
