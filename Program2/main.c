/*
Student Name:Joshua Moore
Student NetID: jjm702
Compiler Used: vim with gcc
Program Description:This program reports the status of the fake flow device we are simulating with dataFlow.dat.
*/

// Your program needs to print an alert message to the screen anytime it reads a value that isn't 
// between 950 and 1050. If the values are between 450 and 550, the program should report that
// pressure in the lines is "low"; if the values are between 1450 and 1550, the program should report
// that the pressure in the lines is "high."  The program should also report the number of data entries 
// read since the last Alert occurred.


#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <time.h>


int main(int argc, char *argv[]) {

//check to see if argv[1] is dataFlow.dat if not set it as that





//open dataFlow.dat






//read file  and switch between the different if conditions






//close file 





//increment the read since last alert counter


    return 0;
}
