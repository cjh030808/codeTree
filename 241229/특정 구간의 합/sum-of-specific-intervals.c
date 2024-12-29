#include <stdio.h>
int arr[101];

int A1ToA2Sum(int a1, int a2){
    int sum = 0;
    for(int i = a1; i <= a2; i++) sum += arr[i];
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < m; i++) {
        int a1, a2;
        scanf("%d %d", &a1, &a2);
        printf("%d\n", A1ToA2Sum(a1, a2));
    }

    return 0;
}