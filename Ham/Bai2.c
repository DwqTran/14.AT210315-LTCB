#include <stdio.h>
#include <math.h>

long long Giaithua(int n){
	if(n==0 || n==1){
		return 1;
	}
		return n * Giaithua(n-1);
}

int main(){
	int n;
	printf("Nhap so ");
	scanf("%d",&n);
	long long ketqua = Giaithua(n);
	printf("Gia tri cua %d! la : %lld\n",n,ketqua);
	return 0;
}
