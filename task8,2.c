#include <stdio.h>

int sum_range(int first,int last){
    int sum=0;
for(int i=first;i<=last;i+=2)
sum+=i;
if(first %2 ==1)
first ++;

return sum;
}

int main(){
int first,last;
printf("Enter first number:");
scanf("%d",&first);
printf("Enter last number:");
scanf("%d",&last);
printf("sum %d\n",sum_range(first,last));

    return 0;
}
