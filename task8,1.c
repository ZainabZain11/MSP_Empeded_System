#include <stdio.h>

int even(int num){ 
 return(num % 2==0);
 
}


int main(){
int num ;
printf("Enter any number:");
scanf("%d",&num);
even(num)?printf("%d\n even number",num):printf("%d\n odd number",num);
return 0;


}