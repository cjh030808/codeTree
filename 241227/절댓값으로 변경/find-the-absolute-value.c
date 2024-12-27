#include <stdio.h>
#include <malloc.h>

void absoluteNum(int *arr, int N){
    for(int i = 0; i < N; i++){
        if(arr[i] < 0) arr[i] *= -1;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    absoluteNum(arr, N);

    for(int i = 0; i < N; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}