#include <stdio.h>

int seqSum(int n) {
    if(n <= 2) return n;

    return seqSum(n / 3) + seqSum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", seqSum(n));
    return 0;
}