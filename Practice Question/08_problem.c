// write a program to find out the leap year.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input the year
    int year;

    // input the year
    printf("Enter the Year: ");
    scanf("%d",&year);

    // condition is start

    // if year of modulus by 4 and remainder is 0,print leap year
    if(year%4==0)
    printf("This is a leap year");

    // otherwise print not a leap year
    else
    printf("This is not a leap year");

    return 0;
    // end of code
}