#include<stdio.h>
#include<stdlib.h>
struct acc_holder
{
	long int acc_num;
	char name[30];
	int bal;
}c[200];

/*Function to perform withdrawal or deposition*/
void action(long int accnum, int amount, int code){
    	int i;
	for (i = 0; i < 200; i++){
		if (c[i].acc_num == accnum);
		break;
	}
			
	if (code==2)
	{
		if (c[i].bal - amount < 100)
		{
			printf("\nThe balance is insufficient for the specified withdrawl");
			return;
		}
		else
		{
			c[i].bal -= amount;
			printf("\nYour new account balance is : %d",c[i].bal);
		}
	}
	else if(code==1){

	{
		c[i].bal += amount;
		printf("\nYour new account balance is : %d", c[i].bal);
	}
	}
	
}

/*Print the balance below 100 Rs.*/
void below100();


int main()
{   
    // struct acc_holder c[200];

    int n;
    printf("Enter the number of customer.");
    scanf("%d",&n);
    fflush(stdin);
    for(int i=0;i<n;i++){
        printf("Enter your account name:");
        gets(c[i].name);
        printf("Enter your balance and account number:");
        scanf("%d %ld",&c[i].bal,&c[i].acc_num);
fflush(stdin);
    }
	int amount, code;
    long int accnum;
	printf("\nEnter your account number : ");
	scanf("%ld", &accnum);
	printf("Enter 1 for deposit and 2 for withdrawal : ");
	scanf("%d", &code);
	if (code==1)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else if(code ==2)
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
	action(accnum, amount, code);
	printf("\nAll members with account balance less than 100 are following\n : ");
	below100();
	
}
void below100(){
    
    	int i;
	for (i = 0; i < 200; i++)
	{
		if (c[i].bal < 100 && c[i].bal > 0)
		{
			printf("\nName : %s", c[i].name);
			printf("\nAccount Number : %ld\n\n", c[i].acc_num);
		}
	}
}

