#include <stdio.h>
#include <string.h>

int palindrome(char *input){
    char copy[100];
    int len = strlen(input);
    int j = len - 1;
    strcpy(copy, input);
   
    for(int i = 0; i < len; i++){
        if(input[i] != copy[j--]) return 0;
    }
    return 1;
}

int main() {
    char input[100];
    scanf("%s", input);

    if(palindrome(input)) printf("Yes");
    else printf("No");
    return 0;
}