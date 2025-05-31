// write a program to find the factorial with the help of function 

// header file
#include<stdio.h>
// declare a function
void factorial(int);

// define the function with data type int and variable is k
void factorial(int k)
{
    // take a variable for input and factorial
    int i,f=1;

    start a loop
    for(i=1;i<=k;i++)
    {
    // {   logic of calculating factorial number
        f*=i;

    }
    // print the factorial number
    printf("factorial of a number is %d",f);
    
}

// main file
int main()
{
    // take a variable for input
    int a;

    // input of number
    printf("Enter your number: ");
    scanf("%d",&a);

    // call a function
    factorial(a);

    return 0;
    // end of code
}