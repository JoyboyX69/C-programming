// write a program to find out the prime number or not

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input,loop and count for counting the number
    int n,i,c=0;

    // take a input number
    printf("Enter a number: ");
    scanf("%d",&n);

    // start a for loop
    for(i=1;i<=n;i++)
    {
        // condition if number is divided by loop and remainder is 0
        if(n%i==0)
        // count is increment
        c++;
    }
    // if count is equal to 2 then print this is a prime number
    if(c==2)
    printf("This is a prime no.");

    // otherwise print this is not a prime number
    else
    printf("This is not a prime no.");
    return 0;
    // end of code
}   