#include <stdio.h>

int swap(int *a, int *b){
    int tmp = *a; 
    *a = *b;
    *b = tmp;
    return 0;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    swap(&n, &m);
    printf("%d %d", n, m);
    return 0;
}