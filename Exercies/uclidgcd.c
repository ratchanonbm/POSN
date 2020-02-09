#include <stdio.h>

int main() {
    int a,b,s;

    scanf("%d",&a);
    scanf("%d",&b);

    while(s != 0){
        s = a % b;
        a = b;
        b = s;
    }
    printf("%d",a);
}
