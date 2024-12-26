#include <stdio.h>

void returnMultPlus(int *a, int *b){
    if(*a < *b){
        *a *= 2;
        *b += 25;
    } else{
        *a += 25;
        *b *= 2;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    returnMultPlus(&a, &b);
    printf("%d %d", a, b);
    return 0;
}