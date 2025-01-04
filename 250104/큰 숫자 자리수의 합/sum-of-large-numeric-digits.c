#include <stdio.h>

int plusEachNum(int n) {
    if(n == 0) return 0;
    return plusEachNum(n / 10) + n % 10;
}

int main() {
    int a, b, c;
    int num;
    scanf("%d %d %d", &a, &b, &c);
    num = a * b * c;
    printf("%d", plusEachNum(num));
    return 0;
}