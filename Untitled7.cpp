#include <stdio.h>
#include <string.h>

int isAnagram(const char *str1, const char *str2) {
    int freq[26] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i] - 'a']++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[str2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string (lowercase only): ");
    scanf("%99s", str1);
    printf("Enter second string (lowercase only): ");
    scanf("%99s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
    } else if (isAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}

