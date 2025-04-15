#include <stdio.h>
#include <math.h>

int main(){
	
	int n,i;
	printf("S = 1 + 1/2! + 1/3! + ... + 1/n!\nNhap vao so n ");
	scanf("%d",&n);
	double S=0.0;
	long long giaithua=1;
	for(i=1;i<=n;i++){
		giaithua *= i;
		S += 1.0/giaithua;
	}
	printf("%.2lf",S);
	
	return 0;
}
