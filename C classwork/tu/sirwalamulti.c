/*Program to compute the product of two matrices if possible*/

#include <stdio.h>

void main()

{

    int matrix1[10][10], matrix2[10][10], i, j, k, product[10][10], M, N, P, Q;

    int row_mul_col = 0;

    printf("\nEnter order of first matrix (less than 10*10):\t");

    scanf("%d %d", &M, &N);

    printf("\nEnter order of second matrix (less than 10*10):\t");

    scanf("%d %d", &P, &Q);

    if (N != P)

    {

        printf("\nThe matrices are unsuitable for multiplication.\n");

        exit();
    }



    printf("\nEnter the elements of first matrix:\t");

    for (i = 0; i < M; i++)

    {

        for (j = 0; j < N; j++)

        {

            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nThe first matrix is:\n");

    for (i = 0; i < M; i++)

    {

        for (j = 0; j < N; j++)

        {

            printf("%d\t", matrix1[i][j]);
        }

        printf("\n");
    }



    printf("\nEnter the elements of second matrix:\t");

    for (i = 0; i < P; i++)

    {

        for (j = 0; j < Q; j++)

        {

            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nThe second matrix is:\n");

    for (i = 0; i < P; i++)

    {

        for (j = 0; j < Q; j++)

        {

            printf("%d\t", matrix2[i][j]);
        }

        printf("\n");
    }



    /*multiply two matrices*/

    for (i = 0; i < M; i++)

    {

        for (j = 0; j < Q; j++)

        {

            for (k = 0; k < N; k++)

            {

                row_mul_col += matrix1[i][k] * matrix2[k][j];
            }

            product[i][j] = row_mul_col;

            row_mul_col = 0;
        }
    }

    printf("\nThe matrix after multiplication is:\n");

    for (i = 0; i < M; i++)

    {

        for (j = 0; j < Q; j++)

        {

            printf("%d\t", product[i][j]);
        }

        printf("\n");
    }
}