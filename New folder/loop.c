#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5 - i; j >= 1; j--)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    return 0;
}