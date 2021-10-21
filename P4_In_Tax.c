#include <stdio.h>

int main()
{
    float income, tax, taxpercent, temp;
    printf("# Income Tax Calculator :-\n\n");
    printf("Enter income amount (in LPA): ");
    scanf("%f", &income);
    temp = income;
    if (income < 2.5)
    {
        tax = 0;
    }
    else if (income < 5.0)
    {
        tax = (temp - 2.5) * (0.05);
    }
    else if (income < 10)
    {
        tax = (2.5 * 0.05) + ((temp - 5) * 0.2);
    }
    else
    {
        tax = (2.5 * 0.05) + (5 * 0.2) + ((temp - 10) * 0.3);
    }
    if (tax < 1)
    {
        printf("\nFor income %f , income tax to be paid is : %f thousand rupees", income, tax * 100);
    }
    else
    {
        printf("\nFor income %f , income tax to be paid is : %f lakh rupees", income, tax);
    }
    return 0;
}
