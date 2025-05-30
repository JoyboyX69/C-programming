// write a program to sum the number you want with the help of do while.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a 3 variable for input,loop and sum=0 to sum of all natural number
    int n,i=1,sum=0;

    // input your number
    printf("Enter the number: ");
    scanf("%d",&n);

    // start a do while loop
    do
    {
        // sum is the loop according to the input the number
        sum+=i;
        // increment the i variable 
        i++;
    }

    // check the condition 
    while(i<=n);
    
    // print the sum of a number
    printf("Sum of a number:%d",sum);
    return 0;
    // end of code
}