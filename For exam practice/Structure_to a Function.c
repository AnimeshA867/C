#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int class;
    char name[30];
};
void display(struct student s[2]){
    for(int i=0;i<2;i++){

    printf("%s\t %d\n",s[i].name,s[i].class);
    strcpy(s[i].name,"Sona");
    s[i].class+=5;
    }

}
void main(){
    struct student s[2];
    for(int i=0;i<2;i++){
        printf("Enter the name:");
        gets(s[i].name);
        printf("Enter the class:");
        scanf("%d",&s[i].class);
        fflush(stdin);
    }
    display(s);
    printf("After passing into the function\n");
    for(int i=0;i<2;i++){
        printf("%s\t%d\n",s[i].name,s[i].class);
    }
}