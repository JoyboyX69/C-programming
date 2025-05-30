// write a program to print a table 

// header file
#include<stdio.h>

// main file
int main()
{
    // take a 2 variable for input and for loop
    int n,i;

    // input the number you want to print the table
    printf("Enter the number you want to print the table: ");
    scanf("%d",&n);

    // start loop to print table 
    for(i=1;i<=10;i++)
    {
        // print the table and logic
        printf("%d * %d= %d\n",n,i,n*i);
    }
    return 0;
    // end of code
}