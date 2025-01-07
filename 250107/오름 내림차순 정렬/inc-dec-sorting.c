#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int re_compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n;
    int element[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &element[i]);
    }

    qsort(element, n, sizeof(element[0]), compare);
    for(int i = 0; i < n; i++) {
        printf("%d ", element[i]);
    }
    printf("\n");
    qsort(element, n, sizeof(element[0]), re_compare);
    for(int i = 0; i < n; i++) {
        printf("%d ", element[i]);
    }
    return 0;
}