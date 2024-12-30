#include <stdio.h>

void ASC(int N){
    if(N == 0) return;
    ASC(N - 1);
    printf("%d ", N);
}

void DESC(int N){
    if(N == 0) return;
    printf("%d ", N);
    DESC(N - 1);

}

int main() {
    int N;
    scanf("%d", &N);
    ASC(N);
    printf("\n");
    DESC(N);
    return 0;
}