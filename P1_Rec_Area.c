// Write a C program to calculate area of a rectangle.

#include<stdio.h>

int main()
{ 
    float l, b, area;
    printf("Enter Length(in cm) : ");
    scanf("%f",&l);
    printf("Enter Breadth(in cm) : ");
    scanf("%f",&b);
    area = l * b;
    printf("Area of Rectangle is : %f sq. cm", area);
    return 0;
}
