#include <stdio.h>
#include <string.h>

int arrayIndex(char *arr, char *target) {
    int len = strlen(arr);
    int trglen = strlen(target);

    for(int i = 0; i < len; i++){
        if(target[0] == arr[i]) {
            int tmp = i;
            for(int j = 0; j < trglen; j++) {
                if(target[j] == arr[tmp]){
                    tmp++;
                }
            }
            if(tmp - i == trglen) return i;
        }
    }
    return -1;
}

int main() {
    char arr[1000];
    char target[1000];

    scanf("%s", arr);
    scanf("%s", target);

    printf("%d", arrayIndex(arr, target));
    return 0;
}