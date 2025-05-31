// Question: Write a program in c to take a input in array and then print the array value

// header file
#include<stdio.h>

// main file
int main()
{
    // take an array with space 10
    int arr[10];

    // Start a for loop to take an input 
    for(int i=0;i<10;i++)
{
    // take an input
    printf("Enter a number : ");
    scanf("%d",&arr[i]);
}   

// start a loop for print the value
    for( int i=0;i<10;i++)
    {       
    // print the value of input array and loop value
        printf("%d is %d\n",i,arr[i]);
    }
    return 0;
    // end of code
}