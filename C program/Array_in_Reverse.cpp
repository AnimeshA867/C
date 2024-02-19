#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n;
	int length=sizeof(a);
	printf("Enter number of arrays required:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter number:");
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
	return 0;
}
