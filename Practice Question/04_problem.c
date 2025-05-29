// write a program to find out the simple interest.

// header file
#include<stdio.h>

// main file
int main()
{
    // take variable for calculate the simple interest p for principal,r for rate,t for time and si is simple interest
    int p,r,t,si;

    // take input for  principal
    printf("Enter the Pricipal: ");
    scanf("%d",&p);

    // take input for  rate
     printf("Enter the Rate: ");
    scanf("%d",&r);

    // take input for time
     printf("Enter the Time: ");
    scanf("%d",&t);    

    // formula of calculate simple interest
    si=p*r*t/100;

    // print the value of simple interest
    printf("Simple interest %d",si);
    
    return 0;
    // end of code

}   