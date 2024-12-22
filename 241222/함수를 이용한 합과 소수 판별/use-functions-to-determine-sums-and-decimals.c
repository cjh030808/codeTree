#include <stdio.h>

int primeNum(int n){
    if(n == 1) return 0;
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
}

int aPlusb_EvenNum(int n){
    int aPlusb = 0;
    while(n != 0){
        aPlusb += n % 10;
        n /= 10;
    }
    if(aPlusb % 2 == 0) return 1;
    else return 0;
}

int main() {
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(primeNum(i)) sum += aPlusb_EvenNum(i);
    }

    printf("%d", sum);
    return 0;
}