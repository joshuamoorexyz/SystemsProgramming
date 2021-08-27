For this exercise you must write a program which generates a set of random numbers from three ranges and stores them in a binary file using system calls.

The program should meet the following criteria:

The program should be named createFile
The program should be able to be called in one of three ways:
createFile 
createFile <filename> <number>
createFile <filename> <number> <low value> <middle value> <high value>
The command line arguments represent the following:

<filename> - name of the binary file, if the value isn't specified default it to flowData.dat
<number> - total number of values to generate, if this value isn't specified default it to 60
<low value> - the average value of the lower range, if this value isn't specified default it to 5
<middle value> - the average value of the middle range, if this value isn't specified default it to 10
<high value> - the average value of the upper range, if this value isn't specified default it to 15
The createFile program will follow a simple process:

loop while all the numbers haven't been written to the file
generate a random number between 0 and 100 to determine which range to use
generate a random number between -.5 and .5 to create the offset
create the value to be stored by
adding the offset to the chosen range's average
multiplying the resulting number by 100
truncating the number to an integer
use a union to convert the newly created integer to a 4 byte character buffer
output the character buffer.
The odds of each range being written into the file of random numbers are fixed.

The lower range is written into the file if a random number between 0 and 15 is generated;

the upper range is written into the file if a random number between 85 and 100 is generated;

all other values should be in the middle range.
