//program to find  max of three numbers
// date: 10-Dec-2020
//Name: shubham pandav

#include <stdio.h>

void main()
{

    int A, B, C; //declare three variables

    printf("Enter three values : ");
    scanf("%d%d%d", &A, &B, &C); // taking user input

    // using ternary operator
    int largest = A > B ? (A > C ? A : C) : (B > C ? B : C);
    printf("\n The max of three number is : %d", largest);
}