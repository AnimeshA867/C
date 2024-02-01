#include<stdio.h>
void main(){
    int num1=50,num2=75;
    int and =(num1&num2);
    int or=num2|num1;
    int xor=num1^num2;
    int xnor=!num1^num2;

    printf("and: %d\n ",and);
    printf("Or: %d\n",or);
    printf("Xor: %d\n",xor);
    printf("Xnor: %d",xnor);
    printf("%d",sizeof(int));
}