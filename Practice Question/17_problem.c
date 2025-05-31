// write a program to find the factorial with the help of while loops.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input,loop and factorial
    int n,i=1,pro=1;

    // take a input of a number
    printf("Enter the number: ");
    scanf("%d",&n);

    // start a loop
    while(i<=n)
    {
        // formula of calculating factorial number 
        pro*=i;
        // increment the loop value to shift another number
        i++;
    }
    // print the factorial number 
    printf("factorial of number is %d",pro);
    return 0;

    // end of code
}   