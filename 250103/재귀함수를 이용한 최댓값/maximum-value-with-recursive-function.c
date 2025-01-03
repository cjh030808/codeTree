#include <stdio.h>

int max(int n, int *arr, int max_num) {
    if(n == -1) return max_num;

    if(max_num < arr[n]) max_num = arr[n];
    max(n - 1, arr, max_num);
}

int main() {
    int n;
    int arr[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", max(n - 1, arr, 0));
    return 0;
}