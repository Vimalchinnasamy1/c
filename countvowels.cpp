#include <stdio.h>

int countVowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    scanf("%s", str);
    printf("Number of vowels: %d\n", countVowels(str));
    return 0;
}

