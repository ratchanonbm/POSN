#include <stdio.h>

int main() {
    int dec,bin=0,k=1,c=0;
    scanf("%d",&dec);
    while(dec != 0){
        bin = bin + ((dec%2)*k);
        if(dec%2==1) c++;
        dec /= 2;
        k *= 10;
    }
    printf ("%d",bin);
    if(c%2==0) printf("1");
    else printf("0");
}
