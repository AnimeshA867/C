#include<stdio.h>
void main(){
    int a=0001,b=0111;
    printf("%d\n",a|b);
    printf("%d\n",a&b);
    printf("%d\n",a^b);
    printf("%d\n",!a^b);
    printf("%d\n",~a);
}