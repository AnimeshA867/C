#include<stdio.h>
int main(){
    float l,b,h,tsa;
    printf("Enter sides to find total surface area of cuboid:");
    scanf("%f %f %f",&l, &b, &h);
    tsa=2*(l*b + b*h + l*h);
    printf("The total surface area of the trapezoid is: %.5f",tsa);
}