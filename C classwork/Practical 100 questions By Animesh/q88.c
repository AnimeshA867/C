// using pointer write a program to add two 3 × 2 matrices and print the result in matrix form.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a, *b, *sum,n=0;
    a = (int *)calloc(6, sizeof(int));
    b = (int *)calloc(6, sizeof(int));
    sum = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the matrix element of matrix A:");
            scanf("%d", a + n);
            n++;
        }
    }
    n=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the matrix element of matrix B:");
            scanf("%d", b +n);
            n++;
        }
    }
    n=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(sum + n) = *(a + n) + *(b + n);
            n++;
        }
    }
    n=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(sum + n));
            n++;
        }
        printf("\n");
    }
}