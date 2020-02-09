#include <stdio.h>

int main() {
    int x[10] = {1,2,-5,4,5,6,7,8,9,10};
    int min;
    min = x[0];
    for(int i=1;i<10;i++){
        if(x[i]<min)
            {min = x[i];}
    }
    printf("%d",min);
}
