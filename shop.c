#include <stdio.h>

int main() {
  int T,a,b,p,q,c;
  scanf("%d",&T);

  for(int i = 0;i<T;i++){
    scanf("%d %d %d %d",&a,&b,&p,&q);
    c = 0;
    for(int j = p;j<=q;j++){
        for(int k = p;k<=q;k++){
            if(j*k>=a&&j*k<=b)  c++;
            if(j*k>b) break;
        }
    }
    printf("%d",c);
  }
}
