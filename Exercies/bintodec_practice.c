#include <stdio.h>

int main() {
    int dec=0,k=1;
    long int bin;
    scanf("%d",&bin);
    while(bin != 0){
        dec += (bin%10)*k;
        bin /= 10;
        k *= 2;
    }
    printf("%d",dec);
}
