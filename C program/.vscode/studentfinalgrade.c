#include<stdio.h>
#include<conio.h>
int  main(){
    float a[5],sum,av;
    for(int i=0;i<4;i++){
        printf("Enter the marks of a student: ");
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    av=sum/2;
    if(av<50){
        printf("The student has failed.");
    }
    else{
        printf("The student has passed.");
    }
}