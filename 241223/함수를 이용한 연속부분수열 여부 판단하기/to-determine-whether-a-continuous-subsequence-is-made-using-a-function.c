#include <stdio.h>
#include <malloc.h>



int partSequence(int *A, int *B, int An, int Bn){
    int n = -1;
    for(int i = 0; i < An; i++){
        if(A[i] == B[0]) n = i;
    }
    if(n == -1) return 0;
    for(int j = 0; j < Bn; j++){
        if(A[n++] != B[j]) return 0;
    }
    return 1;
}

int main() { 
    int An, Bn;
    scanf("%d %d", &An, &Bn);

    int *A = (int *)malloc(sizeof(int) * An);
    int *B = (int *)malloc(sizeof(int) * Bn);

    for(int i = 0; i < An; i++) scanf("%d", &A[i]);
    for(int i = 0; i < Bn; i++) scanf("%d", &B[i]);

    if(partSequence(A, B, An, Bn)) printf("Yes");
    else printf("No");
    return 0;
}