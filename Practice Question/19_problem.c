// Question: Write a program in c to find out the number is prime or not with the help of while loop

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input,loop and count is 0 
    int n,i=1,c=0;

    // take a input
    printf("Enter a number: ");
    scanf("%d",&n);

    // start a loop
    
    while(i<=n)
    {  
        // condition if input is modulus and remainder is 0 then count variable is increment
        if(n%i==0)
        c++;
    
    }
    // if count is equal to 2 then print this is a prime number
    if(c==2)
    printf("This is a Prime No.");

    // otherwise print this is not a prime number
    else
    printf("This is not a Prime No.");
    return 0;
    // end of code
}