#include <stdio.h>
#include <string.h>

int arrayIndex(char *arr, char *target) {
    int len = strlen(arr);
    int trglen = strlen(target);

    // 입력 문자열을 순차적으로 탐색
    for (int i = 0; i <= len - trglen; i++) {
        int found = 1;
        // 목적 문자열의 모든 문자가 일치하는지 확인
        for (int j = 0; j < trglen; j++) {
            if (arr[i + j] != target[j]) {
                found = 0;
                break;
            }
        }
        // 모두 일치하면 해당 인덱스를 반환
        if (found) {
            return i;
        }
    }

    // 일치하는 부분 문자열이 없으면 -1 반환
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
