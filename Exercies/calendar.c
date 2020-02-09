#include <stdio.h>

int main() {
    int start,day,d=1;

    scanf("%d %d",&start,&day);

    for(int i=1;i<=7&&d<=day;i++){
        //Start Day Check
        if(start!=1){
            printf("   ");
            start -= 1;
        } else {
            //End Day Check
            if(i == 7||d==day){
                //Digit Check
                if(d<10) printf(" %d\n",d);
                else printf("%d\n",d);
                i = 0;
            } else {
                if(d<10) printf(" %d ",d);
                else printf("%d ",d);
            }
            d += 1;
        }
    }
}
