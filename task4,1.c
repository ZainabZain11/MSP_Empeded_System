#include <stdio.h>

int main(){

int grade ;
scanf("%d", &grade);
if(grade>=85){
    printf("excellent");
    }
    else if(grade>=75){
        printf("very good");
    }
    else if(grade>=65){
        printf("good");
    }
    else if(grade>=50){
        printf("pass");
    }
    else if(grade<50){
        printf("fail");
    }
return 0;
    }








