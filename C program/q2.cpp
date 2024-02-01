// WAP that takes input of two numbers and an operator in (+,-,*,/) as input and pass those number and an operator to the fuction. The function should calculate the result of two numbers as indicated by operator and return the result. Disply the result of computation in your program.
#include<stdio.h>
#include<conio.h>
#include<string.h>
float result(float x,float y,char z){
    if(z=='+'){
        return x+y;
    }
    else if(z=='-'){
        return x-y;
    }
    else if(z=='*'){
        return x*y;
    }
    else{
        return x/y;
    }
}
int main(){
    float a,b;
    char o;
    printf("Enter any two numbers:");
    scanf("%f %f",&a,&b);
    printf("Enter the operation: + - * / ");
    scanf("%s",o);
    float t=result(a,b,o);
    printf("The %c of %.2f and %.2f is: %.2f",o,a,b,t);
	return 0;
}
