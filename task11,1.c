#include<stdio.h>
struct Circle{
float radius;
float perimeter;
float area;

};
int main(){
struct Circle Cir;
float pi=3.14;
printf("Enter circule radius");
scanf("%f",&Cir.radius);
Cir.perimeter=Cir.radius*2*pi;
Cir.area=Cir.radius*Cir.radius*pi;
printf(" \nperimeter =\n %.3f",Cir.perimeter);

printf("\narea=\n %.3f",Cir.area);







  return 0;  
}