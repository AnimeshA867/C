//WAP to to check the greatest number among three numbers. (1+4)
#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter any three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    if(a>c){
        if(a>b){
            printf("%f is the greatest.",a);
        }else {
        printf("%f is the greatest.",b);
        }
    }
    else{
        if(b>c){
            printf("%f is the greatest.",b);

        }
        else{
            printf("%f is the greatest.",c);
        }
    }
    return 0;
}