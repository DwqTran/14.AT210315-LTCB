#include <stdio.h>
#include <math.h>

int UCLN(int a,int b){
	int i,j;
	if(a==0){
		return b;
	}
	if(b==0){
		return a;
	}
	int min=(a<b)?a:b;   // Tim so nho hon trong a va b
	int ucln=1;
	for(i=min;i>=1;i--){
		if(a%i==0 && b%i==0){
			ucln=i;
			break;
		}
	}
	return ucln;
}

int BCNN(int a, int b){
	int j=1;
	int bcnn;
	if(a==0 || b==0){
		return 0;
	}
	int max=(a>b)?a:b;
	for(j=max; ;j++){
		if(j%a==0 && j%b==0){
			return j;
		}
	}
}

int main(){
	int a,b,ucln,bcnn;
	printf("Nhap so ");
	scanf("%d%d",&a,&b);
	ucln=UCLN(a,b);
	printf("UCLN cua 2 so %d va %d la %d\n",a,b,ucln);
	bcnn=BCNN(a,b);
	printf("BCNN cua 2 so %d va %d la %d\n",a,b,bcnn);
	return 0;
	
}
