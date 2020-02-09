#include <stdio.h>

int main() {
  int T;

  scanf("%d",&T);

  for(int i=0;i<T;i++){
    unsigned long long int N;
    scanf("%llu",&N);
    unsigned long long int count=1,L[N];;
    for(int j=0;j<N;j++){
      scanf("%llu",&L[j]);
    }
    for(int k=1;k<=N;k++){
        unsigned long long int n;
        n = k - 1;
        if(L[k]>=L[n]){
            count++;
        }
        while(L[k]<L[n]){
           count++;
           n = n - 1;
           if(n<0){
            break;
           }
        }
    }
    printf("%llu\n",count);
  }
}
