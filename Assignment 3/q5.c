#include<stdio.h>
void search(int a[10],int el){
    int t=0;
    for(int i=0;i<10;i++){
        if(a[i]==el){
            printf("Element found. %d",el);
            t++;
            break;
        }
    }
    if(t==0){
        printf("Element not found.");
    }

}
void main(){
    int a[10];
    for(int i=0;i<10;i++){
        printf("Enter array element:");
        scanf("%d",&a[i]);
    }
    int el;
    printf("Enter the element to search:");
    scanf("%d",&el);
   
    search(a,el);
}