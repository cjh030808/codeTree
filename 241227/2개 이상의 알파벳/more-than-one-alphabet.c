#include <stdio.h>
#include <string.h>

int alphabet2(char *arr, int len){
    int result = 0;
    for(int i = 0; i < len; i++) {
        if(arr[i] != arr[i+1]) result ++;
        if(result >= 1) return result;
    }
    return result;
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