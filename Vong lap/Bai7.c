#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("S = 1 + 1/2 + 1/3 + ... + 1/n\n");
	printf("Nhap so n ");
	scanf("%d",&n);
	float S=0;
	int i;
	for(i=1;i<=n;i++){
		S += 1.0/i;
	}
	printf("S = %.2f\n",S);
	return 0;
}
