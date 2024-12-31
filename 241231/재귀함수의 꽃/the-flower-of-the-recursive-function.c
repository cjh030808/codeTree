#include <stdio.h>

void downUp(int n) {
    if(n == 0) return;
    printf("%d ", n);
    downUp(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    downUp(n);
    return 0;
}