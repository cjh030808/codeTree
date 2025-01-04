#include <stdio.h>

int loopCount(int n) {
    if(n == 1) return 0;
    if(n % 2 == 0) return loopCount(n / 2) + 1;
    else return loopCount(n * 3 + 1) + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", loopCount(n));
    return 0;
}