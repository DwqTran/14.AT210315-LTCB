#include <stdio.h>

int main(){
	// TH1: 
	int mang1[3][3] = {
	    {1,2,3},
	    {4,5,6},
	    {7,8,9}
	};
	printf("Cac phan tu trong mang 1 la : \n");
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mang1[i][j]);
		}
		printf("\n");
	}
	
	// TH2: 
	
	int mang2[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Nhap vao cac phan tu cua mang2 : ");
			scanf("%d ",&mang2[i][j]);
		}
	}
	printf("Cac phan tu cua mang2 la : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mang2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
