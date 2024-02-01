#include<stdio.h>
void main(){
    int a[10];
    for(int i=0;i<10;i++){
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    int n,c=0;
    printf("Enter the element to search:");
scanf("%d",&n);
for(int i=0;i<10;i++){
    if(a[i]==n){
        printf("The value has been found.");
        break;
    }else{
        c++;
    }
}
    if(c==10){
        printf("The element has not been count.");
    }
}