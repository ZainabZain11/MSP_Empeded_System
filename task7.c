#include <stdio.h>

int max(int x,int y);

int min( int x,int y);

int main(){

int x,y;
int max_result,min_result;
printf("Enter two values");
scanf("%d %d",&x,&y);
max_result= max(x,y);
printf("max=%d\n",max_result);
min_result= min(x,y);
printf("min=%d\n",min_result);
}

int max(int x, int y){
return(x>y)? x:y;
}

int min(int x ,int y){
return(x<y)? x:y;

}