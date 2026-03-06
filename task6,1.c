#include <stdio.h>
int main(){

int guess;
int target=10;
do{
printf("Enter a number (0-10):");
scanf("%d",&guess);
if(guess>target){
    printf("too high\n");
}
else if(guess<target){
    printf("too low\n");
}



 

}
while(guess!=target);
printf("correct answer\n");
return 0;
}