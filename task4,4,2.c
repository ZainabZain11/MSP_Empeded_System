#include<stdio.h>
int main(){
int x=10;
int y=20;
int z=30;
if(x>y && x>z){
    printf("x is the biggest");

}
else if(y>x && y>z){
    printf("y is the biggest");
}
else{
    printf("z is the biggest");
}






    return 0;
}