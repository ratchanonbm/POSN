#include <stdio.h>

int main() {
    int i,n,sum=0,num;
    float avg = 0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum = sum + num;
    }
    avg = sum / n;
    printf("%.2f",avg);
}
