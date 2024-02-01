//Write a program which reads salary of 25 employees and count the number of employees who are getting salary between 30,000 and 40,000
#include<stdio.h>
#include<conio.h>
int main(){
	int salary[5],c=0;;
	for(int i=0;i<5;i++){
		printf("Enter salary of the employee:");
		scanf("%d",&salary[i]);
	}
	for(int i=0;i<5;i++){
		if(salary[i]>=30000&&salary[i]<=40000){
			c++;
		}
	}
	printf("The number of employee with salary more than 30,000 and less than 40,000 are: %d",c);
	return 0;
}
