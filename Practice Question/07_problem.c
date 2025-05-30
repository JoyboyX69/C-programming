// write a program to print salary and do condition as well.

// header file
#include<stdio.h>

// main file
int main()
{
    // take a variable for input the salary
    int salary;

    // input the salary
    printf("enter your salary: ");
    scanf("%d",&salary);

    // condition for tax paid or not

    if(salary<=250000)
    printf("You dont need to pay tax");

    else if(salary>250000 && salary<500000)
    printf("Tax to paid 5% =%d",salary*5/100);


    else if(salary<500000 && salary>1000000)
    printf("Tax to be paid 10%=%d",salary*10/100);

    else
    printf("Tax to be paid 30%=%d",salary*30/100);
    return 0;

    // end of code
}