//program to check given number is  armstrong  number or not
// Date : 05-01-2021

#include <stdio.h>
void main()
{
    int n, r, sum = 0, temp;
    printf("enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");
}