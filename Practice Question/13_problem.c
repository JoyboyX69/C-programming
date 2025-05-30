// write a program to print back table

// header file
#include <stdio.h>

// main file
int main() {
   
    // take a 2 variable for number and loop
   int n,i;
   
//    input the value 
   printf("Enter the number: ");
   scanf("%d",&n);
   
//    start a loop
    // i start from 10 and go to the 1 and i is decrement the i value
   for(i=10;i>=1;i--)
   {
    // print the value of all variable and logic to print the table
       printf("%d * %d= %d\n",n,i,n*i);
   }

    return 0;
    // end of code
}