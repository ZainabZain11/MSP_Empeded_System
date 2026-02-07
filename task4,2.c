#include <stdio.h>
int main (){

int num1,num2;
scanf("%d %d",&num1,&num2);
if(num1>num2){
    printf("Biggest number is %d \n",num1);
}
else if(num2>num1){
    printf("Biggest number is %d\n",num2);
}
else{
    printf("both numbers are equal\n");
}
return 0;




}