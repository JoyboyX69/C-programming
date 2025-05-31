/*Question: Print this pattern
 *
 * * *
 * * * * *
 * * * * * * *
 * * * * * * * * *
 * * * * * * * * * * **/

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for 2 loops and input 
    int i,j,n;

    // take an input
    printf("Enter your number you want print lines: ");
    scanf("%d",&n);

    // start a first loop with increament by 2 to print this pattern
    for(i=1;i<=n;i+=2)
    {
        // start a second loop for print the pattern *
        for(j=1;j<=i;j++)
        {
            printf(" *");

        }
        // this is for next lines
        printf("\n");
    }
    return 0;
    // end of code
}