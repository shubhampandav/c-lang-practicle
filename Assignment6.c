// program to print reverse a number 
// 09-01-2021

#include <stdio.h>
void main()
{
     
    int number, rev = 0, remainder;
    printf("Enter an number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        rev = rev * 10 + remainder ;

        number/= 10;
    }
    printf("Reversed number = %d", rev);
}


 // Algorithm 
 /**
 1. start
 2. input number 
 3. Initialize rev = 0,  and reminder
 4. Loop while num != 0
     4.1  remainder = number % 10;
         rev = rev * 10 + remainder;
         number /= 10;

 5. disply result 
 6. stop 
 **/