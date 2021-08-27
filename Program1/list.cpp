#include "list.hpp"

using namespace std;

bool Stack::push(string &val)
{

if (top >= (MAX - 1)) {
cout << "Stack Overflow";
return false;
  }
else {
a[++top] = val;
cout << val << " pushed into stack";
return true;
}
bool Stack::pop()
{
if (top < 0) {
cout <<"Stack underflow";
return 0;

}
else {
int x = a[top--];
return x;
}
}


bool Stack::peek()
{

if (top <0) {
cout <<"Stack is empy";
return 0;

}

else {
int x = a[top];
return x;
}
}


