#include <stdio.h>

void displayArray(int arr[3][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numbers[3][3];
    int size = 3;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    displayArray(numbers, size);

    return 0;
}

