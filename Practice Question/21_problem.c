// write a program in c to raverse a number with the help of while loop.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input,store each element and reverse number
    int n,r,reverse=0,temp;

    // take a input 
    printf("Enter a number: ");
    scanf("%d",&n);

    // start a loop n is not equal to 0
    while(n!=0)
    {
        // sperate the each element
        r=n%10;
        // logic for reverse the input
        reverse=reverse*10+r;
        // each and every element,one by one remove form input
        n=n/10;
    } 
    // print the output of reverse variable and input also 
    printf("Reverse order of number of this %d is %d",n,reverse);
    return 0;
    // end of code
}