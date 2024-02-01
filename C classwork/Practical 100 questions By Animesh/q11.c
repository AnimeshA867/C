//. Program to find the rupee equivalent of U.S. dollars.
#include<stdio.h>
void main(){
    float dollar,npr;
    printf("Enter the current value of Npr in Dollar:");
    scanf("%f",&npr);
    printf("Enter the U.S. Dollar to convert in Npr:");
    scanf("%f",&dollar);
    printf("The rupee quivalent of U.S. Dollar is %.2f",dollar/npr);
}