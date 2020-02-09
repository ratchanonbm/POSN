#include <stdio.h>

int main() {
    int A[2][2] = {1,2,2,7};
    int B[2][2] = {-3,5,6,-2};
    int C[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%2d",C[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
