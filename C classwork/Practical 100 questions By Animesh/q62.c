//Write macros to compute area and circumference of cirlce and make a program to use this macro.
#include<stdio.h>
#define PI 3.14
#define AREA PI*r*r
#define CIRCUFERENCE 2*PI*r
void main(){
    float r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    printf("The area of the circle is :%.2f\n", AREA);
    printf("The circumference of the circle is %.2f",CIRCUFERENCE);
}