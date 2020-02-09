#include <stdio.h>

int main() {
    int a,b,c,p;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    while(p != 0){
        p = a % b;
        a = b;
        b = p;
    }
    printf("gcd = %d\n",a);
    if (c % a == 0) printf("Diophantine equation Have answer");
    else printf("Diophantine equation Don't have answer");

    for(int i=1)
}
