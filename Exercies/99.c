#include<stdio.h>
int main()
{
	int i,j,k;
	scanf("%d",&k);
	for(i=0;i<=k;i++)
        {
		for(j=1;j<=i;j++) {
			printf(" ");
		}
		for(j=k;j>=i;j--) {
			printf("x");
		}
		printf("\n");
	    }
}


