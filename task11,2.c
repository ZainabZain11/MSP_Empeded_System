#include<stdio.h>
struct Time{
int hour;
int minute;
int second;
};
int main(){

    struct Time T1;
struct Time T2;
struct Time sum;
printf("Enter first time hr:Min:sec");
scanf("%d:%d:%d",&T1.hour,&T1.minute,&T1.second);
printf("Enter second time hr:Min:sec");
scanf("%d:%d:%d",&T2.hour,&T2.minute,&T2.second);
sum.second=T1.second+T2.second;
sum.minute=T1.minute+T2.minute;
sum.hour=T1.hour+T2.hour;
if(sum.second>=60){
sum.second=sum.second-60;
sum.minute=sum.minute+1;
}
if(sum.minute>=60){
    sum.minute=sum.minute-60;
    sum.hour=sum.hour+1;
}
printf("\n Sum=%d:%d:%d:\n",sum.hour,sum.minute,sum.second);








    return 0;
}