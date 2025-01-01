#include <stdio.h>

int fibo(int n) {
    if(n == 1) return 1;
    if(n == 2) return 1;
    return fibo(n - 2) + fibo(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",fibo(n));
    return 0;
}