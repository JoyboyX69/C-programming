// write a program to find the Armstrong number or not with the for loops

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input,temporary number,reverse and r for store the each element and i for loop
    int n,temp=0,rev=0,r,i;

    // take a input
    printf("Enter a number: ");
    scanf("%d",&n);

    // store the input value in temp variable
    temp=n;

    // start a loop
    for(i=1;i<=n;i++)
    {
        // logic of calculating a Armstrong number
        r=n%10;
        rev+=(r*r*r);
        n=n/10;
    }
    // if temp variable is equal to reverse number then print this is an armstrong number
    if(temp==rev)
    printf("This is an Armstrong Number");

    // otherwise print this is not a armstrong number
    else
    printf("This is not an Armstrong Number");
    return 0;
    // end of code
}