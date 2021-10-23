#include<stdio.h>
#include<conio.h>

void main()
{ 
    float l, b, area;  //l = length, b = breadth
    printf("Enter Length(in cm) : ");
    scanf("%f",&l);
    printf("Enter Breadth(in cm) : ");
    scanf("%f",&b);
    area = l * b;
    printf("Area of Rectangle is : %f sq. cm", area);
    getch();
}
