
/*Student Name: Joshua Moore	
 * Student NetID: jjm702
 * Compiler Used: vim with g++
 * Program Description:This program reads an unspecified number of strings and displays them in the 
 * reverse order they were entered*/




#include<iostream>
#include "list.cpp"
#include <iomanip>

using namespace std;



int main(){

//counter for the loop to allocate array size
class Stack stack;
int inputs =0;
cout<<"The program will read strings unti STOP is entered";
cout<<endl;


while(inputs<=1000)
{
string tmp;
cin >> tmp;
if(tmp=="STOP"){
break;}
else{
stack.push(tmp);
inputs+1;
}

}


//inform the user that the data will now be displayed in reverse
cout <<"The data that was entered will now be displayed in reverse";
cout<<endl;
//display all the strings in reverse

stack.Display();
stack.pop();
stack.Delete();



//free the space used by the data structure to store the strings


return (0);

}
