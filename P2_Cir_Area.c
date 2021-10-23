#include<stdlib.h>
#include<conio.h>

void main()
{
    float radius_of_circle;
    
    printf("Enter Radius(in cm) : ");
    scanf("%f",&radius_of_circle);
    
    printf("Area of circle is : %f", 3.14 * radius_of_circle * radius_of_circle);
    
    getch();
}
