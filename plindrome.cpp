#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}

