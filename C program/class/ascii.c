#include<stdio.h>
int main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    printf("%d",a);
    int add=a+8;
    printf("\nEntered character = %d",add);
    printf("\nEntered character = %c",add);

    char x='\\';
    //This is a back slash character.
    printf("The asci value of backslash=%d\n",x);
    char y='\n';
    char z='\t';
    printf("ASCII value of new line is: %d\n",y);
    printf("ASCII value of new tab is: %d\n",z);
}
