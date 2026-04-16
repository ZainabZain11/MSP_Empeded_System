#include<stdio.h>
void num (int arr[2][3],int size);



int main(){
int arr[2][3]={
{3,4,5}
,
{2,5,7}

};
num(arr,2);


    return 0;
}
void num (int arr[2][3], int size){

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
printf("%d\n",arr[i][j]);
    
        }
printf("\n");
    }
}