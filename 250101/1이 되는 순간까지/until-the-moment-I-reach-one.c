#include <stdio.h>

int div(int n) {
    if(n == 1) {
        return 0;
    }

    if(n % 2 == 0) {
        return div(n / 2) + 1;
    }
    else {
        return div(n / 3) + 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", div(n));
    return 0;
}