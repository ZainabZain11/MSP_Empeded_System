#include <stdio.h>
int main (){

    int x;
    scanf("%d",&x);
    
    if(x > 0) {
        if(x == 1 || x == 4 || x == 9 || x == 16 || x == 25) {
            printf("x is positive number & perfect square\n");
        } 
        else {
            printf("x is positive number & not perfect square\n");
        }
    } 
    else {
        printf("x is negative number & not perfect square\n");
    }

    return 0;
}