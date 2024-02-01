#include<stdio.h>
#include<math.h>
#define pi 3.14
void main(){
    float radius1, radius2,area;
    printf("Enter the radius of the inner circle:");
    scanf("%f",&radius1);
    printf("Enter the radius of the outer circle:");
    scanf("%f",&radius2);
    area=pi*(pow(radius2,2)-pow(radius1,2));
    printf("The area of the concentric circle is: %.2f",area);
}