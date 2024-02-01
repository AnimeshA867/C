#include<stdio.h>
#include<stdlib.h>
struct student {
    char name[50], add[50];
    int roll;
    long phone;
}st;
void main(){
    printf("Enter the name of the student:");
    gets(st.name);
    printf("Enter the address of the student:");
    gets(st.add);
    printf("Enter the roll no. ");
    scanf("%d",&st.roll);
    printf("Enter the phone number of the student:");
    scanf("%ld",&st.phone);
    printf("%s\t %s\t %d\t %ld",st.name,st.add,st.roll,st.phone);
}
