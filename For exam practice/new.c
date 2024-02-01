#include <stdio.h>
#include <string.h>
#include<stdlib.h>
    struct creadithour
    {
        char name[20];
        int code, credit;
    };
void main()
{
    struct creadithour s[3];
    int i, temp;
    for (i = 0; i <= 2; i++)
    {
        fflush(stdin);
        printf("enter the name of the subject\n");
        gets(s[i].name);
        printf("enter the code of the subject\n");
        scanf("%d", &s[i].code);
        printf("enter the credit of the subject\n");
        scanf("%d", &s[i].credit);
    }
    printf("credit hour greater than 3 are as follows:");
    for (i = 0; i < 3; i++)
    {
        if (s[i].credit > 3)
        {
            printf("%s\n", s[i].name);
        }
    }
}