#include <stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int max1,max2;
max1=arr[0];
for(int i=0;i<5;i++){
 if(arr[i]>max1) {
 max1=arr[i]; 
 }  

}
max2=-1;
for(int i=0;i<5;i++){

if(arr[i]>max2&& arr[i]!= max1){
max2=arr[i];
}
}
printf("Second largest elementis:%d",max2);

    return 0;
}