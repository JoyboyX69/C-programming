//write a program to print nth term of the fibonacci series with the help of recursion function

// header file
#include<stdio.h>

// declare the function
int fibonacci(int);

// define the function
int fibonacci(int f)
{
    // condition f is equal to 1 and equal to 2 then print f-1
    if(f==1||f==2)
        return f-1;

        // otherwise return this formula with value
    return fibonacci(f-1)+fibonacci(f-2);
}

// main file
int main()
{
    // take a variable for input
    int n;

    // take an input
    printf("Enter a number: ");
    scanf("%d",&n);

    // call the function
    fibonacci(n);

    // print the value of fibonacci series
    printf("The value of fibonacci series is %d",fibonacci(n));
    return 0;
    // end of code
}