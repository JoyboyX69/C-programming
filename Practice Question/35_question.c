// Question: Create a program in c to print the matrix 3X3

// header file
#include <stdio.h>

// main file
int main() {
    
    // take an array to print the matix
    int arr[3][3];
    
     // start a first loop for input the rows   
    for(int i=0;i<3;i++)
    {
        // start a second loop for input the columns
        for(int j=0;j<3;j++)
        {
            // take an input
            printf("Enter the element:");
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    printf("Your Matrix \n");
    // start a first loop to print the value of rows
    for(int i=0;i<3;i++)
    {
                // start a second loop to print the value of columns
        for(int j=0;j<3;j++)
        {
            // print the array
            printf("%d\t",arr[i][j]);
        }
        // with each row and column print the next line
        printf("\n");
    }

    return 0;
    // code of end
}