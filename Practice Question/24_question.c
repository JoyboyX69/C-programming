// write a program to find the three subjects marks average with the help of function 

// header file
#include<stdio.h>
// Declare the function
int avearge(int,int,int);

// define this function is only return the formula
int average(int a,int b,int c)
{
//     int avg;
//      avg=(a+b+c)/3;
//      printf("Average of three subjects: %d",avg);
        return (a+b+c)/3;

}

// main file
int main()
{   
    // take a variable for x,y and z for marks
    int x,y,z;

    // input the 3 subject marks
    printf("enter the english marks: ");
    scanf("%d",&x);

    printf("enter the hindi marks: ");
    scanf("%d",&y);
    
    printf("enter the maths marks: ");
    scanf("%d",&z);

    // call the function
    average(x,y,z);

    // print the average of three marks and call it 
    printf("Average of a three subject %d %d %d is %d",x,y,z, average(x,y,z));
    
    return 0;
    // end of code
}