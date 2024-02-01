#include <stdio.h>
void printt(int A[100], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", A[i]);
    }
}
void sort(int A[100], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printt(A, len);
}
int maximum(int a[100], int len)
{
    int max = -214748364;
    for (int i = 0; i < len; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int minimum(int a[100], int len)
{
    int min = 214748364;
    for (int i = 0; i < len; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
void main()
{
    int m, n, a[m], b[n];
    int case1;
    printf("Enter the size M:");
    scanf("%d", &m);
    printf("Enter the size N:");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        printf("Enter the element of Array A:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of Array B:");
        scanf("%d", &b[i]);
    }
    printf("Press\n1 to Read two arrays\n2 for sorting both array\n3 for minimum of A\n4 for Maximum element of B:\n");
    scanf("%d", &case1);
    switch (case1)
    {
    case 1:
        printt(a, m);
        printf("\n----------------------------------------------------------\n");
        printt(b, n);
        break;
    case 2:
        sort(a, m);
        printf("\n-------------------------------------------------\n");
        sort(b, n);
        break;
    case 3:
        printf("The minimum element of a is: %d", minimum(a, m));
        break;
    case 4:
        printf("The maximum element of b is :%d", maximum(b, n));
    }
}