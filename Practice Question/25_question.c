// Write a program of convert into celcius to farenheight

// header file
#include<stdio.h>
// declare the function
float c2f(float);

// define the function
float c2f(float c)
{
    // take a variable in float data type cel 
    float cel;

    // formula to convert celcius to farenheight
    cel=((c*9.0)/5.0)+32;

    // print the farenheight
    printf("frenheight is %.2f",cel);
}

// main file
int main()
{
    // take variable for input 
    float frn;

    // take a input 
    printf("Enter the celcius: ");
    scanf("%f",&frn);

    // call the function
    c2f(frn);

    return 0;
    // end of code
}