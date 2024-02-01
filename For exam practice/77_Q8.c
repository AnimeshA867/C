// Write a program to find product of two integers using your own function.
#include<stdio.h>
float product(float a, float b){
    return a*b;
}
void main(){
    float a,b;

    printf("Enter any two number to find product of:");
    scanf("%f %f",&a,&b);
    printf("The product of these two numbers is %.2f",product(a,b));
}