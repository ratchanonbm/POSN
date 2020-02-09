#include <stdio.h>

int main() {
    int inBank = 50000,money,b1000=5,b500=7,b100=10,wb1000=0,wb500=0,wb100=0;

    printf("Withdraw : ");
    scanf("%d",&money);

    if(money>inBank) printf("Not Enough Money");
    else{
        while(money!=0){
            if(money>=1000&&b1000!=0){
                money -= 1000;
                wb1000++;
                b1000--;
            } else if(money>=500&&b500!=0){
                money -= 500;
                wb500++;
                b500--;
            } else if(b100!=0){
                money -= 100;
                wb100++;
                b100--;
            } else {
                printf("Not Enough in ATM\n");
                money = 0;
            }
        }
        printf("B1000 = %d\nB500 = %d\nB100 = %d\n",wb1000,wb500,wb100);
    }
}
