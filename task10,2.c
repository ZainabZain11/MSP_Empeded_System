#include<stdio.h>
int main(){
int arr[5];
int *ptr =&arr[0];
int temp;
for(int i=0;i<5;i++){
    printf("Enter element %d: ", i + 1);
    scanf("%d",ptr+i);


}


for(int i=0;i<5/2;i++){
    temp=*(ptr+i);
    *(ptr+i)=*(ptr+5-1-i);
    *(ptr+5-1-i)=temp;
}
printf("\nAraay elements:\n[");
for(int i=0;i<5;i++){
    printf("%d",*(ptr+i));

    if(i<4){
        printf(" , ");
    }
}
printf("]\n");

    return 0;
}