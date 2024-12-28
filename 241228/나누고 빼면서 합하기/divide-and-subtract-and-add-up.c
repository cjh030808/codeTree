#include <stdio.h>
#include <malloc.h>

int sumUntilOne(int *sequence, int m) {
    int sum = 0;
    while(m != 1){
        sum += sequence[m - 1];
        if(m % 2 == 0) m /= 2;
        else m -= 1;
    } 
    return sum + sequence[0];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *sequence = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }
    printf("%d", sumUntilOne(sequence, m));
    free(sequence);
    return 0;
}