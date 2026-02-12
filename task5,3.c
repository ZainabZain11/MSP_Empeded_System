#include<stdio.h>
int main(){

double radios;
double perimeter;
double area;
printf("input the radios=");
scanf("%lf", &radios);
perimeter =(2*3.14*radios);
area =(3.14 * radios *radios);
printf("perimeter= %.6f\n",perimeter);
printf("area = %.6f\n",area);


    return 0;
}