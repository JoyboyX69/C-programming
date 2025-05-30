// write a program to print sum of a number with the help of while loop

// header file
#include <stdio.h>

// main file
int main() {

    // take a 3 variable,1 for number ,2 for loop,3 for sum
    int n,i=1,sum=0;
    
    // input your number
    printf("Enter the number: ");
    scanf("%d",&n);
    
    // start a loop
    while(i<=n)
    {
        // add the sum of iteration of i value
        sum=sum+i;
        // increment the i value
        i++;
    }
    // print the value sum of a all natural number
    printf("sum of a number:%d",sum);

    return 0;
    // end of code
}