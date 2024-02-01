#include<stdio.h>
#include<math.h>
void positive(float a,float b,float d){
    float r1=((-b+d)/2*a);
    float r2= ((-b-d)/2*a);
    printf("The two roots of the equation are: %.2f %.2f",r1,r2);
}
void null(float a, float b){
    float r1=((-b)/2*a);
    printf("The root of the equation is: %.2f",r1);
}
void imaginary(){
    printf("The roots of the equation are imaginary.");
}
void main(){
    float a,b,c,d;
    printf("Enter the coefficient of a:");
    scanf("%f",&a);
    printf("Enter the coefficient of b:");
    scanf("%f",&b);
    printf("Enter the coefficient of c:");
    scanf("%f",&c);
    d=pow((pow(b,2)-4*a*c),0.5);
    if(d>0){
        positive(a,b,d);
    }
    else if(d==0){
        null(a,b);
    }
    else{
        imaginary();
    }
}
