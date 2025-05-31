// Write a program find the force with the help of g=9.8mg

// header file
#include<stdio.h>

// declare the function
float mass(float);

// define the function
float mass(float m)
{
    // take varibale g for gravity
    float g=9.8;

    // return mass*gravity
    return m*g;
}

// main file
int main()
{
    // take a variable for input
    float mas;

    // take a input 
    printf("Enter the mass: ");
    scanf("%f",&mas);

    // call the function
    mass(mas);

    // print the mass and force and function call
    printf("Mass is %.2f then force is %.2f",mas,mass(mas));
    return 0;
    // end of code
}