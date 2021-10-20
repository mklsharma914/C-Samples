#include<stdio.h>

int main()
{
    int num;
    printf("# To check a number is even or odd :-\n\n");
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is Even.",num);
    }
    else
    {
        printf("%d is Odd.",num);
    }

    return 0;
}
