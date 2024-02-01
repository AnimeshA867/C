//Write a progarm in C to find the product of two 3X3 matrices.
#include<stdio.h>
#include<conio.h>
int main(){
	int a[7][7],b[7][7];
	int c[7][7];
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
				printf("Enter the value:");
				scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
				printf("%d \t",a[i][j]);
}
			printf("\n");
			
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
				printf("Enter the value:");
				scanf("%d",&b[i][j]);
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			c[i][j]=0;
				for(int k=j;k<4;k++){
					c[i][j]+=a[i][j]*b[j][i];
				}
		} }
		
			for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
				printf("%d \t",c[i][j]);
}
			printf("\n");
			
	}
}
