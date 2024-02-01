/*
program to read n numbers in an array and display their sum and average. Use the concept
of pointer to access array elements.
*/
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n], sum1;
    float average1;
    // int *ptr =a;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the array element:");
        scanf("%d", a + i);
        sum1 += *(a + i);
    }

    average1 = sum1 / n;
    printf("The sum of the elements of the array is %d\n", sum1);
    printf("The average of the elements of the array is %.2f", average1);
}