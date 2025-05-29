// write a program to find out a number is diviible by 97 or not.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for value
    int a;

    // take a input of variable
    printf("Enter the number you want to check: ");
    scanf("%d",&a);

    // condition for variable a is divisible by 97 or not
    if(a%97==0)
    // if this codition is true then print this statement
    printf("THis is Divisible by 97");

    // otherwise print this statement
    else
   printf("THis is not Divisible by 97");

    return 0;
    // end of code
}   