#include<stdio.h>
#include<conio.h>
int main(){
    float p,t,r,i;
    printf("Enter principal and time respectively:");
    scanf("%f %f",&p,&t);
    if(p>100000){
        r=0.05;
    }
    else{
        r=0.03;
    }
    i=(p*t*r);
    printf("%.3f is the interest of the balance.",i);
}