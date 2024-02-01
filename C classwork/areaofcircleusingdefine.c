#include<stdio.h>
#define pi 3.14
#include<math.h>
void main(){
    float radius,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area=pi*pow(radius,2);
    printf("The area of the circle: %.3f",area);
}