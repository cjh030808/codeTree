#include <stdio.h>

void recurseStar(int n) {
    if(n == 0) return;

    for(int i = 0; i < n; i++) printf("* ");
    printf("\n");
    recurseStar(n - 1);
    for(int i = 0; i < n; i++) printf("* ");
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    recurseStar(n);
    return 0;
}