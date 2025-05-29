// QUESTION: Write a program in c to find out an area of a rectangle and also find parameter 

// header file
#include<stdio.h>

// main file
int main()
{
    // Take a two variable for length and breath,and 1 variable is area and another is para to store the value
    int l,b,area,para;

    // take a input of length and breath
    printf("Enter the value of length:");
    scanf("%d\n",&l);

    printf("Enter the value of Breath:");
    scanf("%d\n",&b);

    // logic of find the area of a rectangle
    area=l*b;
    printf("Area of a Rectangle is %d\n",area);

    // logic to find the parameter of a rectangle
    para=2*(l+b);
    printf("Parameter of a Rectangle is %d\n",para);
    
    return 0;
    // end of code
    
}