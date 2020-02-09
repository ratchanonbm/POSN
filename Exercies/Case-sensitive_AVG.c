#include <stdio.h>

int main() {
    int n,num,sum=0;
    float avg;

    scanf("%d",&n);
    if(n==0){
        printf("Error");
    }
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        sum += num;
    }

    avg = (float)sum/n;
    printf("%.2f",avg);
}
