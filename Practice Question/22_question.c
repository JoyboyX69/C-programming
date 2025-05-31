// write a program to print simple GM,GA,GN with the help of separte function.

// header file
#include<stdio.h>
// Declare the function
void morning();
void afternoon();
void night();

// main file
int main()
{
    // call the function
    morning();
    afternoon();
    night();
    return 0;

    // end of program
}

// define functions
// function first say morning
void morning()
{
    printf("hi!Goood Morning\n");
}

// other function say afternoon
void afternoon()
{
    printf("hi!Goood Afternoon\n");
}

// last function say good night
void night()
{
    printf("hi!Goood night");
}