// write a program to convert celcius to farenheight in simple way

// header file
#include<stdio.h>

// mian file
int main()
{
    // take a variable in float c for celcius and f for farenheight
    float c,f;

    // take a input of celcius
    printf("Enter the Celcius: ");
    scanf("%f",&c);

    // formula of coversion celcius to farenheight
    f=((9.0/5.0)*c)+32;

    // print the heading 
    printf("Converting Celcius into Farenheight\n");

    // print the celcius value
    printf("Celcius=%f\n",c);

    // print the farenheight value 
    printf("Farenheight=%f",f);

    return 0;
    // end of code
}