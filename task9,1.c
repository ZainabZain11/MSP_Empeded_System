#include <stdio.h>
int main(){

int n;
printf("How many elements do you want?");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enterelements%d\n",i+1);
scanf("%d",&arr[i]);
}
printf("Displaying elements: ");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);

}
    return 0;
}