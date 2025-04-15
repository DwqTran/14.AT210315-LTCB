#include <stdio.h>
#include <math.h>

long long Fibonacci(int n){
	int i;
	long long f[100];
	f[0] = 0;
	f[1] = 1;
	for(i=2;i<=n;i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main(){
	int n;
	printf("Nhap n ");
	scanf("%d",&n);
	long long fn = Fibonacci(n);
	printf("So thu %d cua day Fibonacci la %lld\n",n,fn);
	
	return 0;
}
