#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d %d %d", &a, &b,&c);
    if(a>=b&&a>=c){
        printf("%d is the greatest number.",a);
    }
    else if(b>=c&&b>=a){
        printf("%d is the greatest number.",b);
    }
    else if(c>=a&&c>=b){
        printf("%d is the greatest number.",c);
    }
    else{
        printf("Heheh");
    }
}