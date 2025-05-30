// write a program to find out its lower case or not

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable in the form of char 
    char low;

    // Input your alphabet
    printf("enter the character: ");
    scanf("%c",&low);

    // condition start

    // if low variable is greater than 97 ASCii code and less than 122 AScii code then print lowercase
    if(low>=97 && low<=122)
    printf("This is a lowercase");

    // otherwise this is not a lowercase
    else
    printf("This is not a lowercase");

    return 0;
    // end of code
}