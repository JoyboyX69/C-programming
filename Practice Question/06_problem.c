// Explain the step wise question of 3*x/y-z+k,x=2,y=3,z=3,k=1

// header file
#include<stdio.h>

// main file
int main()
{

    // 3*x/y-z+k
    // 6/y-z+k
    // 2-z+k
    // -1+k
    // -1+1
    //  0
    // take variable according to value given in question and exp for logic
    int x=2,y=3,z=3,k=1,exp;
    
    // formula is given in question
    exp=3*x/y-z+k;

    // print the expression value
    printf("The value of this expression:%d",exp);
    
    return 0;
    // end of code

}