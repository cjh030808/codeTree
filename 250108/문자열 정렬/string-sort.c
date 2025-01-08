#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    char arr[101];
    scanf("%s", arr);

    qsort(arr, strlen(arr), sizeof(arr[0]), compare);
    printf("%s", arr);
    return 0;
}