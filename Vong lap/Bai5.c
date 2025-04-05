#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap so ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
	return 0;
}
