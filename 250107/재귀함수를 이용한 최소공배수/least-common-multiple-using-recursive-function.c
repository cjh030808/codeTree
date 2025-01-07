#include <stdio.h>
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b); 
}

int main() {
    int n;
    int arr[11];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n - 1; i++) {
        arr[i + 1] = lcm(arr[i], arr[i + 1]);
    }
    printf("%d", arr[n - 1]);
    return 0;
}