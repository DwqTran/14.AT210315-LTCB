#include <stdio.h>


int main(){
	int a[10]={2,4,6,7,9,21,34,56,87,99};
	printf("Cac phan tu cua mang theo chieu nguoc lai la : ");
	int i;
	for(i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}
