// Question: Write a program in c to swap the value with the help of pointer

// header file
#include<stdio.h>

// declare the funtion with parameter pointer
int swap(int* ,int* );

// define the function with parameter pointer
int swap(int *a, int *b)
{
    // take a variable temp for store the tempary number
    int temp;

    // logic for swap the value with pointer
    temp=*a;
    *a=*b;
    *b=temp;
}

// main file
int main()
{
    // take a 2 variable for input 
    int x,y;

    // take an input for first value
    printf("enter the value of x: ");
    scanf("%d",&x);

    // take an input for second value
    printf("enter the value of y: ");
    scanf("%d",&y);

    // call the function with pointer
    swap(&x,&y);
    // print the swap values
    printf("The value of x=%d and y=%d",x,y);
    return 0;
    // end of code
}