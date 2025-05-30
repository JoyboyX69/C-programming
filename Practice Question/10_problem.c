// write a program to find out the greatest number of 4 number.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a 4 variable in the form of integer
    int a,b,c,d;
    
    // input the 4 variable
    printf("Enter the 4 number: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    // condition start

    // if a is greater than every variable then A is greater
    if(a>b && a>c && a>d)
    printf("A is a Greater No.");

    // b is greater than c and d variable then print B is greater
    else if(b>c && b>d)
    printf("B is a Greater No.");

    // c is greater than d then print C is greater number
    else if(c>d)
    printf("C is a Greater No.");

    // otherwise D is greater number
    else
    printf("D is a Greater No.");

    return 0;
    // end of code
}