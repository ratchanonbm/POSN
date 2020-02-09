#include <stdio.h>

int main() {
    int dec,bin=0,k=1;
    scanf("%d",&dec);
    while(dec != 0){
        bin = bin + ((dec%2)*k);
        dec /= 2;
        k *= 10;
    }
    printf ("%d",bin);
}
