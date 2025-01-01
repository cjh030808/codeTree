#include <stdio.h>

int F(int n) {
    if(n < 10) return n * n; 
    return F(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", F(n));
    return 0;
}