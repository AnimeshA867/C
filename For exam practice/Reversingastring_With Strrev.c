#include<stdio.h>
#include<string.h>
void main(){

    // char str1[]="JUDE",str2[30];
    // int n=strlen(str1);
    // for(int i=0;i<n;i++){
    //     str2[i]=str1[n-i-1];
    // }
    // printf("%d\n",n);
    // printf("%s",str2);
    
    //Now were are going to concat two string without the use of strcat function.
    //Here we go.

    char fname[]="Animesh",lname[]="Acharya", name[30];
    int i=0,j=0;
    while(fname[i]!='\0'){
        name[i+j]=fname[i];
        i++;
    }
    name[i+j+1]=' ';
    while(lname[j]!='\0'){
        name[i+j+1]=lname[j];
        j++;
    }
    printf("%s",name);
}