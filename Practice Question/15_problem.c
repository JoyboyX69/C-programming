// write a program to print sum of the table.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a 3 variable for input,loop and sum for sum of table
    int n,i,sum=0;

    // take a input 
    printf("Enter the number of a table you want to add: ");
    scanf("%d",&n);

    // start a for loop
    for(i=1;i<=10;i++)
    {
        // formula of sum the table
        sum+=(n*i);
    }
    // print the value of sum of a table 
    printf("sum of a table is %d",sum);

    return 0;
    // end of code
}