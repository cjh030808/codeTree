#include <stdio.h>

void recursiveFunc(int n){
    if(n == 0) return;

    recursiveFunc(n - 1);
    printf("HelloWorld\n");
}

int main() {
    int n ;
    scanf("%d", &n);
    recursiveFunc(n);
    return 0;
}