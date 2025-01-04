#include <stdio.h>
int t(int n) {
    if(n == 1) return 2;
    if(n == 2) return 4;
    return (t(n - 1) * t(n - 2)) % 100;
}


int main() {
    int n;
    int arr[21];
    scanf("%d", &n);
    printf("%d", t(n));
    return 0;
}