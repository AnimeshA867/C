#include<stdio.h>
#include<conio.h>
float area(float,float);
int main(){
    float l,b,a;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f",&l,&b);
    a=area(l,b);
    printf("\n The area of a rectangle is:%f",a);
}
float area(float x,float y){
    float a;
    a=x*y;
    return(a);
}