#include<stdio.h>
struct student {
    int roll;
    char name[50];
    float fees;
    char address[50];
    long int phone;
};
void main(){
    struct student s = {1, "Animesh", 12304.23,"Godawari",1231231231};
    printf("My name is %s\n",s.name);
    printf("My roll no. is %d\n",s.roll);
    printf("I paid %f to be in this institution.\n",s.fees);
    printf("My phone number is %ld\n",s.phone);
    printf("My address is %s",s.address);
}