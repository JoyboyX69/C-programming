// Question: write a program in c to print the address and variable value with the help of pointer

// header file
#include<stdio.h>

// main file
int main()
{
    // take variable and ptr for pointer to hold the address of a
    int a=23;
    int* ptr=&a;

    // print the address of a 
    printf("THe address of A is %u",&a);

    // print the address of a with use of pointer
    printf("THe address of A is %u",*ptr);
    return 0;
    // end of code
}