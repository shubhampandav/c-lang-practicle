
 // WAP to check max amoung three number 
 // code by shubham pandav 

#include <stdio.h>

void main()
{

    int a, b, c;

    printf("Enter the values :");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b)
    {
        if (a >= c)
        {
            printf(" The Max of thre number is: %d", a);
        }
    }
    else
    {
        if (a <= b)
        {
            if (b >= c)
            {
                printf("The Max of thre number is: %d", b);
            }

            else
            {
                printf("The Max of thre number is: %d", c);
            }
        }
    }
}