// write a program to find out the factorial with the help of for loops.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a 3 variable for input,loop,and factorial
    int n,i,sum=1;

    // take a input
    printf("Enter the number: ");
    scanf("%d",&n);

    // start a for loop
    for(i=1;i<=n;i++)
    {
        // formula for calculate the factorial
        sum=sum*i;
    }
    // print the factorial number
    printf("Factorial of this number %d is %d",n,sum);
    return 0;
    // end of code

}