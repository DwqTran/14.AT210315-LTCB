#include <stdio.h>

void nhap(int n, int m, int tmp[100][100]) {
    int i,j;
	for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) 
            scanf("%d", &tmp[i][j]);
    }
}

void in(int n, int m, int tmp[100][100]) {
    int i,j;
	for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", tmp[i][j]);
        }
        printf("\n");
    }
}

void pls(int n, int m, int a[100][100], int b[100][100], int tmp[100][100]) {
    int i,j;
	for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            tmp[i][j] = a[i][j] + b[i][j];
    }
}

void mul(int n, int m, int a[100][100], int b[100][100], int tmp[100][100]) {
    int i,j,k;
	for(i= 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            int res = 0;
            for(k = 0; k < m; k++) {
                res += (a[i][k] * b[k][j]);
            }
            tmp[i][j] = res;
        }
    }
}

int main() {
    int n, m;
    int a[100][100], b[100][100], pl[100][100], mu[100][100];

    printf("Nhap so hang: "); scanf("%d", &n);
    printf("Nhap so cot: "); scanf("%d", &m);

    printf("Nhap ma tran a: \n");
    nhap(n, m, a);

    printf("Nhap ma tran b: \n");
    nhap(n, m, b);

    pls(n, m, a, b, pl);
    mul(n, m, a, b, mu);

    printf("Tong 2 ma tran la: \n");
    in(n, m, pl);

    printf("Tich 2 ma tran la: \n");
    in(n, m, mu);
}
