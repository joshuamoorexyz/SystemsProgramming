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


