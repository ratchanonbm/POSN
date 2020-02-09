#include <stdio.h>

int main() {
    int e,ec;
    float sum;

    //Input Electric
    scanf("%d",&e);

    //Calculate Cost
    if(e>450){
        ec = e - 450;
        sum = sum + (ec*1.50);
        e = e - ec;
    }
    if(e>200){
        ec = e - 200;
        sum = sum + (ec*1.20);
        e = e - ec;
    }
    if(e>50){
        ec = e - 50;
        sum = sum + (ec*0.75);
        e = e - ec;
    }
    if(e>0){
        sum = sum + (e*0.5);

    }

    sum = sum + (sum*0.2);
    printf("%.2f",sum);
}
