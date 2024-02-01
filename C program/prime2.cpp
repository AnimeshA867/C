#include<stdio.h>
#include<conio.h>
int prime(int num){
	int count=0;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			count=1;
			break;
		}
	}
	return count;
}
int main(){
	int n1,n2;
	printf("Enter any two positive integers:");
	scanf("%d %d",&n1,&n2);
	if(n1>n2){
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
	}
	for(int i=n1;i<=n2;i++){
		int flag=prime(i);
		if(flag==0){
			printf("%d\t",i);
		}
	}
}
