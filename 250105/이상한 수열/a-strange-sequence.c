#include <stdio.h>

int seqSum(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;

    return seqSum(n / 3) + seqSum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", seqSum(n));
    return 0;
}