#include <stdio.h>

int main() {
    int y1,y2;
    scanf("%d %d",&y1,&y2);
    for(y1;y1<=y2;y1++){
        if(y1%400==0){
            printf("%d is LEAP YEAR\n",y1);
        } else if(y1%4==0&&y1%100!=0) {
            printf("%d is LEAP YEAR\n",y1);
        } else {
            printf("%d is COMMON YEAR\n",y1);
        }
    }
}
