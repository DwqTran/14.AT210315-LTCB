#include <stdio.h>

int main() {
    int n; 
    int arr[100];
    int min, max;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    int i;
	for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nPhan tu co gia tri nho nhat trong mang la: %d\n", min);
    printf("Phan tu co gia tri lon nhat trong mang la: %d\n", max);

    return 0;
}
