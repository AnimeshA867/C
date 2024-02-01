#include<stdio.h>
#include<stdlib.h>
void main(){
 int *ptr,*ptr2; 
 ptr=(int *)malloc(5*sizeof(int));
 for(int i=0;i<5;i++){
    printf("Enter an array element:");
    scanf("%d",ptr+i);
 }
 for(int i=0;i<5;i++){
    printf("%d\n",*(ptr+i));
 }
//  free(ptr);
ptr2= realloc(ptr,5*sizeof(int));
 for(int i=0;i<7;i++){
    printf("Enter an array element:");
    scanf("%d",ptr+i);
 }
 for(int i=0;i<7;i++){
    printf("%d\n",*(ptr2+i));
 }
}