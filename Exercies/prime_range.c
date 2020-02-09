#include <stdio.h>
#include <math.h>

int main() {
    int prime;
    int root,i;
    unsigned long long int sum=0;
    for(i=2;i<=1000000;i++){
        root = sqrt(i);
        prime = 1;

        if (i==1) prime = 0;
        else if (i==2) prime = 1;
        else if (i!=2&&i%2==0) prime = 0;
        else if (i!=3&&i%3==0) prime = 0;
        else if (i!=5&&i%5==0) prime = 0;
        else if (i!=7&&i%5==0) prime = 0;
        else if (i!=11&&i%11==0) prime = 0;
        else if (i!=13&&i%13==0) prime = 0;
        else if (i!=17&&i%17==0) prime = 0;
        else if (i!=19&&i%19==0) prime = 0;
        else if (i!=23&&i%23==0) prime = 0;
        else if (i!=29&&i%29==0) prime = 0;
        else if (i!=31&&i%31==0) prime = 0;
        else {
            for(int j=37;j<=root;j+=2){
                if(i%j==0) {
                    prime = 0;
                    break;
                }
            }
        }
        if(prime == 1) {
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\n%llu",sum);
}
