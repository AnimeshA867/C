//Write a program to calculate area and perimeter of a rectangle using macros.
#include<stdio.h>
#define AREA l*b
#define PERIMETER 2*(l+b)

void main(){
    float l,b;
    printf("Enter the length and breadth of the rectangle:");
    scanf("%f %f",&l,&b);
    printf("The area of the rectangle is %.2f\n",AREA);
    printf("The perimeter of the rectangle is %.2f",PERIMETER);
}