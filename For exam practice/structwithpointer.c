#include<stdio.h>
#include<stdlib.h>
struct student{
    int class;
    char name[30];
    char address[30];
};
void main(){
    struct student s[2],*ptr;
    ptr=s;
    for(int i=0;i<2;i++){
        fflush(stdin);
        printf("Enter the name of the studnet:");
        gets(s[i].name);
        printf("Enter the class of the student:");
        scanf("%d",&s[i].class);
    }
    for(int i=0;i<2;i++){
        printf("%s\t %d\n",(ptr+i)->name,(ptr+i)->class);
    }
  for(int i=0;i<2;i++){
        printf("%s\t %d\n",(*(ptr+i)).name,(*(ptr+i)).class);
    }

}