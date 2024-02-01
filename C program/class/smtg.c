#include <stdio.h>

void main()
{
    int n;

    printf("Enter a number to check whether it's odd or even, positive or negative and prime number or composite:\t");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The given number is a odd even.\n");
    }
    else
    {
        printf("The given number is an odd.\n");
    }

    if (n < 0)
    {
        printf("The given number is negative.\n");
        printf("\n As a negative number cannot be prime, the number is composite.");
    }
    else
    {
        printf("The given number is positive.\n");
        int flag = 0;
        if (n <= 2)
        {
            printf("The given number is a prime number.");
        }
        else
        {
            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    printf("The given number is a composite number.");
                    break;
                }
            }
            if (flag == 0)
            {
                printf("The given number is a prime number.");
            }
        }
    }
}