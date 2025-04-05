#include <stdio.h>
#include <math.h>

int main(){
	int tong=0;
	int i;
	for(i=0;i<=100;i++){
		if(i%2==1){
			tong+=i;
		}
	}
	printf("Tong cac so le tu 1 den 100 la %d\n",tong);
	return 0;
}
