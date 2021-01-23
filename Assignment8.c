
// wap to calculate factorial of given number
#include<stdio.h>

 void main (){

     int fact =1 ,n;
printf("Enter a number: ");
     scanf("%d",&n);

     for (int i = n ; i >=1; i++)
     {
        fact = fact*i;
     }
     printf(" The factorial is : %d",fact);
 }