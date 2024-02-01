#include<stdio.h>
#include<string.h>
void charSwap(char (*a)[30],char (*b)[30]){
    char temp[30];
    strcpy(temp,*a);
    strcpy((*a),*b);
    strcpy((*b),temp);
}
void main(){
    char temp[30],name[30][30];
    char lwrname[30][30];
    for(int i=0;i<10;i++){
        printf("Enter the name of the person %d: ",i+1);
        gets(name[i]);
        strcpy(lwrname[i],name[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++)
        if(strcmp((name[j]),(name[j+1]))>0){
           charSwap((name+j),(name+j+1));
        }
    }
    for(int i=0;i<10;i++){
        printf("%s\n",name[i]);
    }
}