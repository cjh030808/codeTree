#include <stdio.h>

int completeNum(int n){
    if(n % 2 == 0) return 0;
    if(n % 10 == 5) return 0;
    if(n % 3 == 0 && n % 9 != 0) return 0;
    return 1;
}

int main() {
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        sum += completeNum(i);
    }
    printf("%d", sum);
    return 0;
}