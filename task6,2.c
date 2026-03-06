#include <stdio.h>
int main(){

char password;
char correct_password ='z';
printf("Enter your passoword:");
scanf("%c",&password);
while(password!= correct_password){
 printf("Enter your password:");
 scanf("%c",&password);

}
printf("Hello zainab\n");





}