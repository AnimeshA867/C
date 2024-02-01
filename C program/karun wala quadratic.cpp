#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c,d,root1,root2,real,img;
	printf("to find root of quadratic ");
	printf("Enter a cofficient a:");
	scanf("%f",&a);
	printf("Enter a coefficient b:");
	scanf("%f",&b);
	printf("Enter a coefficient c:");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d>0){
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("Root 1=%.2f and root 2 = %.2f",root1,root2);
	}
	else if(d==0){
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2f",root1);
	}
	else{
		real=-b/(2*a);
		img=sqrt(-d/(2*a));
		printf("root1=%.2f+%.2f and root2=%.2f-.%.2f",real,img,real,img);
	}
}
