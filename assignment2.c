//program to find  max of three numbers
// date: 10-Dec-2020
//Name: shubham pandav

#include <stdio.h>

void main()
{

    float A, B, C; //declare three variables

    printf("Enter three values : ");
    scanf("%f%f%f", &A, &B, &C); // taking user input
   
    if (A >= B && A >= C)
    {
        printf("max of three number: %f", A);
    }
    if (B >= A && B >= C)
    {
        printf("max of three number: %f", B);
    }
    if (C >= B && C >= A)
    {
        printf("max of three number: %f", C);
    }
}