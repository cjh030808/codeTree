#include <stdio.h>
#include <string.h>

int alphabet2(char *arr, int len){
    for(int i = 0; i < len - 1; i++) {
        if(i >= 1 && arr[i] != arr[i+1]) return 1;
    }
    return 0;
}

int main() {
    char arr[100];
    int len;
    scanf("%s", arr);
    len = strlen(arr) - 1;
    if(alphabet2(arr, len)) printf("Yes");
    else printf("No");  
    return 0;
}