// write a program in c to print 10 number in array and verify using arithmatic pointer that (ptr+2) point to the third element where ptr is a pointer pointing to the first element of the array

// header file
#include<stdio.h>

// main file
int main()
{
    // take an array with space 10 and pointer point to array
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr= arr;

    // print the address of array and the value of array *(ptr+2)
    printf("the address of array is %u and the value of array is %d",ptr+2,*(ptr+2));
    
    return 0;
    // end of code
}





