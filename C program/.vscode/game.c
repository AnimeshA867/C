#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void main(){
    int p,c;
    srand(time(0));
    c=rand()%3 +1;
    printf("Rock is 1 \n Paper is 2 \n Scissor is 3 \n");
    printf("For rock press 1, for paper press 2, for scissor press 3: \n");
    scanf("%d",&p);
    if(p>4){
        printf("You had one job.");
    }
    else if((p==2&&c==1) || (p==3&&c==2) || (p==1&&c==3)){
        
        printf("You win, computer chose %d",c);
    }
    else if(p==c){
        printf("Draw");
    }
    else{
        printf("You lose,computer chose %d",c);
    }
}