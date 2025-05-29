// write a program to find out the area of a circle and volume of circle as well.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for Radius and Height for volume and float variable value pie,area and volume
    int r,h;
    float pie=3.14,area,volume;

    // input for Radius
    printf("Enter a Radius of a Circle: ");
    scanf("%d",&r);

    // formula of area of circle
    area=pie*(r*r);

    // print the value area of a circle
    printf("Area of a Circle:%f\n",area);

    // input for height for find out the volume
    printf("Enter the Height: ");
    scanf("%d",&h);

    // formula of volume of a Circle
    volume=area*h;

    // print the value of volume of a circle
    printf("Volume of Cylinder is %f ",volume);
    
    return 0;
    // end of code
}