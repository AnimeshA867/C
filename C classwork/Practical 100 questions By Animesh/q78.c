// Program to read 4 × 4 matrix and find sum of each row.
#include <stdio.h>
void main()
{
    int a[4][4], sum[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the matrix element [%d%d]:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    } 
   
    for (int i = 0; i < 4; i++)
    {
        sum[i]=0;
        for (int j = 0; j < 4; j++)
        {
            sum[i] += a[i][j];
        }
    }
    for(int i=0;i<4;i++){
        printf("The sum of row %d is %d\n",i,sum[i]);
    }
  
}