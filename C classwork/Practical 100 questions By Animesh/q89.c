// Program to search the given name among the list of names of n students using pointer.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search(char str[200], char str2[200]){
    if(strcmp(str,str2)==0){
        return 1;
    }else{
        return 0;
    }
}
void main(){
   int n;
   printf("Enter the number of students:");
   scanf("%d",&n);
   fflush(stdin);
   char name[n][200],search1[200];
   for(int i=0;i<n;i++){
    printf("Enter name of student:");
    gets(*(name+i));
   }
   printf("Enter the name to search:");
   gets(search1);
   int b=0;
   for(int i=0;i<n;i++){

   int a=search(name[i],search1);
   if(n==0){
    b++;
    continue;
   }else if(n==0){
    printf("The name %s has been found.",search1);
    break;
   }
   
   }
   if(b!=1){
    printf("The name %s has not been found.",search1);
   }
 
}