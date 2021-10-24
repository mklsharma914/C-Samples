#include<stdio.h>
#include<time.h>

int main()
{
    int year;
    clock_t t;
    double time_taken;

    printf("Enter Year : ");
    scanf("%d", &year);

    t = clock();
    
    if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
    {
        printf("\nYear %d is a leap year.", year);
    }
    else
    {
        printf("\nYear %d is not a leap year.", year);
    }
    
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken %f seconds to execute.\n", time_taken);

    t = clock();
    
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("\nYear %d is a leap year.", year);
            }
            
        }
    }
    else
    {
        printf("\nYear %d is not a leap year.", year);
    }


    return 0;
}
