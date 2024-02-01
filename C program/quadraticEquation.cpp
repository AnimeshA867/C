// Program to solve quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c,d,root1,root2,real,img;
	printf("To find the root of quadratic equation. \n");
	printf("Enter the cofficient a:");
	scanf("%f",&a);
	printf("Enter the cofficient b:");
	scanf("%f",&b);
	printf("Enter the cofficient c:");
	scanf("%f",&c);
	d=(b*b)-4*(a*c);
	if(d>0){
		root1=(-b+sqrt(d))/2*a;
		root2=(-b-(sqrt(d)))/(2*a);
		printf("Two square root of the quadratic equation are %.2f and %.2f",root1,root2);
	}
	else if(d==0){
		root1=-b/2*a;
		printf("As d=0, only one root exists, so the root is %.2f",root1);
	}
	else{
		/*real=-b/(2*a);
		img=sqrt(-d/2*a);
		printf("Root 1: %.2f + %.2f and Root 2: %.2f - %.2f",real,img,real,img);
		*/
	printf("The root is imaginary.");
	}
}
