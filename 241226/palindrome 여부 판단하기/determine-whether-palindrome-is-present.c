#include <stdio.h>
#include <string.h>

int palindrome(char *input) {
    int len = strlen(input);

    for (int i = 0; i < len / 2; i++) {
        if (input[i] != input[len - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char input[100];
    scanf("%s", input); 

    if (palindrome(input)) printf("Yes"); 
    else printf("No");  
    
    return 0;
}
