#include <stdio.h>

int sumByNum(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    return sumByNum(n - 2) + n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumByNum(n));
    return 0;
}