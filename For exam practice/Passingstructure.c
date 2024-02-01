#include<stdio.h>
struct time{
    int hour,min,sec;
};
struct time add(struct time t1,struct time t2){
    struct time t3;
    t3.hour=t1.hour+t2.hour;
    t3.min=t1.min+t2.min;
    t3.sec=t1.sec+t2.sec;
    return t3;
}
void main(){
    struct time t1,t2;
    printf("Time t1:(hour:min:sec)format:");
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
        printf("Time t2:(hour:min:sec)format:");
    scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
    struct time t3=add(t1,t2);
    printf("The added time is %d:%d:%d",t3.hour,t3.min,t3.sec);
}