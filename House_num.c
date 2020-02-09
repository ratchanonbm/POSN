#include <stdio.h>

int main() {
    int start,end,num;
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;

    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++){
        int digit=0;
        num = i;
        while(num!=0){
            digit = num%10;
            num = num/10;
            switch (digit){
                case 1: n1+=1;break;
                case 2: n2+=1;break;
                case 3: n3+=1;break;
                case 4: n4+=1;break;
                case 5: n5+=1;break;
                case 6: n6+=1;break;
                case 7: n7+=1;break;
                case 8: n8+=1;break;
                case 9: n9+=1;break;
                case 0: n0+=1;break;
            }
        }
   }
    printf("0 = %d\n1 = %d\n2 = %d\n3 = %d\n4 = %d\n5 = %d\n6 = %d\n7 = %d\n8 = %d\n9 = %d\n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);

}
