#include <stdio.h>
int main(){

int num;
int sum =0;
printf("Enter a positive number:");
scanf("%d",&num);
while(num>=0){

sum+=num;
printf("Enter a positive number:");
scanf("%d",&num);
}
printf("sum=%d \n",sum);





return 0;
}