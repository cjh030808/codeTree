#include <stdio.h>
#include <malloc.h>

void stickSorting(int *arr, int left, int right){
    if(left >= right) return;

    int pivot = arr[(left+right) / 2];
    int i = left, j = right;

    while(i <= j) {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++; 
            j--;
        }
    }

    stickSorting(arr, left, j);
    stickSorting(arr, i, right);
}

int main() {
    int n;
    int length = 0;
    int result = 0;
    scanf("%d", &n);

    int *stick = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &stick[i]);
        length += stick[i];
    }
    stickSorting(stick, 0, n - 1);
    
    for(int i = 0; i < n - 1; i++){
        length -= stick[i];
        result += length * stick[i];
    }
    

    printf("%d", result);

    free(stick);
    return 0;
}