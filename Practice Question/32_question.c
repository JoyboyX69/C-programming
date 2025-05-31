// write a program to swap a value with the help of function(call by value).

// header file
#include <stdio.h>

// declare the function with parameter
void swap(int,int);

// define the function with parameter
void swap(int a,int b)
{
    // take a variable temp for temporary number to hold the value of another variable value
    int temp=0;
    
    // logic of swap the value with the help of third variable
    temp=a;
    a=b;
    b=temp;
    
    // print the value of swap x and y 
    printf("X=%d and Y=%d",a,b);
}

// main file
int main() {
    // take a 2 variable for input 
    int x,y;

    // take an input for the variable of x
    printf("enter your x value: ");
    scanf("%d",&x);

    // take an input for the variable of Y
    printf("enter your y value: ");
    scanf("%d",&y);
    // print nothing only space
    printf("");
        
    // call the function
    swap(x,y);
    
    return 0;
    // end of code
}
