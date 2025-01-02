#include <stdio.h>

int sumByEven(int n) {
    if(n == 0) return 0;
    return sumByEven(n - 2) + n;
}

int sumByOdd(int n) {
    if(n == 1) return 1;
    return sumByOdd(n - 2) + n;
}

int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 0) printf("%d", sumByEven(n));
    else printf("%d", sumByOdd(n));
    return 0;
}