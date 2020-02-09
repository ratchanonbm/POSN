#include <stdio.h>

int main() {
  int num,max;
  scanf("%d",&num);
  max = num;
  for(int i=0;i<2;i++){
    scanf("%d",&num);
    if(num>max) max = num;
  }
  printf("%d",max);
}
