// WAP to cal area and perimeter of rectangle and triangle
// 2-Dec-2020
//Name : shubham narayan pandav

#include <stdio.h>

void main()
{

    int side1, side2, side3, len, breadth;
    float area_t;
    int peri_t, peri_r, area_r;

    printf("\nEnter the values of Three sides : ");
    scanf("%d%d%d", &side1, &side2, &side3);

    printf("Enter the values of Lenght and breadth :");
    scanf("%d%d", &len, &breadth);
    // cal area of rectangle

    area_r = len * breadth;

    // cal area of triangle

    area_t = side1*side1/2;
    
    // cal perimeter of rectangle

    peri_r = 2*(len+breadth);

    // cal perimeter of triangle

    peri_t = side1+side2+side3;


    // display result

    printf("\nThe area of triangle : %f", area_t);
    printf("\nThe area of rectangle : %d", area_r);
    printf("\nThe perimeter of triangle : %d", peri_t);
    printf("\nThe perimeter of rectangle : %d", peri_r);
}