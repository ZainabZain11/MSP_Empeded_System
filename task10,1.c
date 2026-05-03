#include <stdio.h>
int main(){
    int n;

printf("How many elements do you want? ");
    scanf("%d", &n);
    int arr[n];
int *ptr=&arr[0];

for(int i=0;i<n;i++){
printf("Enter element %d: ", i + 1);
    scanf("%d",ptr+i);
}
for(int i=0;i<n;i++){
    printf("%d\n",*(ptr+i));
}



    return 0;
}