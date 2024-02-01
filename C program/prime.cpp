#include<stdio.h>
#include<conio.h>
int prime(int num){
	int count=1;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			count=0;
			break;
		}
	}
	return count;
}
int main(){
	int n1,n2,flag;
	printf("Enter any two possitive integers: ");
	scanf("%d %d",&n1,&n2);
	if(n1>n2){
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
}
	for(int i=n1;i<=n2;i++){
	flag = prime(i);
	if(flag==1){
		printf("%d\t",i);
	}
	}
	return 0;
}
