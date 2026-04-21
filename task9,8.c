#include <stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int n=5;
int pos=3;
for(int i=pos;i<n-1;i++){

arr[i]=arr[i+1];

}
n--;
for(int i=0;i<n;i++){ 

    printf("%d\n",arr[i]);
}



    return 0;
}