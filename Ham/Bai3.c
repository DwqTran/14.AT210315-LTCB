#include<stdio.h>
long long  fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    printf("Nhap so fibonacci can tim :");
    scanf("%d", &n);
     long long t = fibonacci(n);
    printf("%lld",t);
    return 0;
}
