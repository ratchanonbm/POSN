#include <stdio.h>
#include <math.h>

int main() {
    int num,prime=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i==1) prime=0;
        else if(i==2) prime=1;
        else if(i%2==0&&i!=2) prime=0;
        else if(i%3==0&&i!=3) prime=0;
        else if(i%5==0&&i!=5) prime=0;
        else {
            for(int j=7;j<=num;j++){
                if(i%j==0) {
                    prime = 0;
                    bre
                    ak;
                }
            }
        }
        if(prime == 1) printf("%d ",i);
    }
}
