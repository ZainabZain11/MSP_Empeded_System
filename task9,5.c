#include <stdio.h>
int main(){
int A [2][2]={{2,2},{4,5}};
int B [2][2]={{4,5},{7,9}};
int sum [2][2];
for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
sum[i][j] = A[i][j] + B[i][j];
        }

        }

printf("Sum of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }




    return 0;
}