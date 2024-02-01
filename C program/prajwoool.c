#include<stdio.h>
#include<string.h>
int main(){
char st[1000];
 char r;
 printf("Enter a string:");
fgets(st,1000,stdin);
printf("Enter a character to find how many times it repeated in the string:");
    scanf("%c",&r);
    r=strlwr(r);
    char a=strupr(r);
    char str=strupr(st);
int c=0;
int i;
for(i=0;i<=strlen(st);i++){
    if(st[i]==a||st[i]==r){
        c++;
    }
}
    printf(" %c occured %d this",r,c);
}
