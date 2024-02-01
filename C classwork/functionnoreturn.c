#include<stdio.h>
int sum(){
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    return a+b;
}
void main(){
    printf("%d",sum());

}