#include <stdio.h>

/*int main(){
    int num;
    scanf("%d",&num);
    if(num>0) printf("%d is I+",num);
    else if(num<0) printf("%d is I-",num);
    else printf("%d is I0",num);
}*/

/*void main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c) printf("A : %d is Greatest",a);
        else printf("C : %d is Greatest",c);
    }
    else {
        if(b>c) printf("B : %d is Greatest",b);
        else printf("C : %d is Greatest",c);
    }
}*/

/*void main() {
    int n,num,max;
    scanf("%d",&n);
    if(num>0) {
        scanf("%d",&num);
        max = num;
    }
    for(int i=1;i<n;i++){
        scanf("%d",&num);
        if(num>max) max = num;
    }
    printf("Greatest Number = %d",max);
}*/
int max;

int maX(int num);

void main() {
    int A[10]={2,13,32,34,12,23,3,44,89,9};
    max = A[0];
    for(int i=1;i<10;i++){
        maX(A[i]);
    }
    printf("Greatest Is : %d",max);
}

int maX (int num) {
    if(num>max) max = num;
    return max;
}
