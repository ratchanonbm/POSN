#include <stdio.h>

int main() {

  unsigned long long int num;
  int dig=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0;
  scanf("%llu",&num);
  while(num!=0){
    dig = num%10;
    num = num/10;
    switch (dig){
    case 1: a1+=1;break;
    case 2: a2+=1;break;
    case 3: a3+=1;break;
    case 4: a4+=1;break;
    case 5: a5+=1;break;
    case 6: a6+=1;break;
    case 7: a7+=1;break;
    case 8: a8+=1;break;
    case 9: a9+=1;break;
    case 0: a0+=1;break;
    }
  }
  printf("Frequence of 0 = %d\nFrequence of 1 = %d\nFrequence of 2 = %d\nFrequence of 3 = %d\nFrequence of 4 = %d\nFrequence of 5 = %d\nFrequence of 6 = %d\nFrequence of 7 = %d\nFrequence of 8 = %d\nFrequence of 9 = %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
}
