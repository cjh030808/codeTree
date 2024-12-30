#include <stdio.h>

void ascStar(int n) {
    if(n == 0) return;
    ascStar(n - 1);
    for(int i = 0; i < n; i++) printf("*");
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    ascStar(n);
    return 0;
}