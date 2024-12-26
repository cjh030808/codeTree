#include <stdio.h>
#include <malloc.h>

void evenNum(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) arr[i] /= 2;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    evenNum(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}