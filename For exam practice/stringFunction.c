#include<stdio.h>
#include<string.h>
void str(char (*s)[],char (*s1)[]){
char temp[30];
strcpy(temp,(*s));
strcpy(*s,*s1);
strcpy(*s1,temp);
}
void main(){
    char s1[]={"Hello"};
    char s2[]={"Hi"};
    printf("%s and %s\n",s1,s2);
    printf("After swapping:\n");
    str(&s1,&s2);
    printf("%s and %s",s1,s2);
}