#include <stdio.h>
void main()
{
    char gender;
    printf("Enter your gender in one word. Do not write G:");
    scanf("%c", &gender);
    (gender == 'M' || gender == 'm') ? printf("You're male") : printf("You are female.");
    for(int i=0;i<10;i++){
        printf("%d\n",i);
    }
}