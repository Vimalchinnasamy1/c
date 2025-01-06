#include <stdio.h>

void displayArray(int arr[] ,int size) {
    for (int i = 0; i < size; i++) {
        if(i%2==0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int numbers[10];
    int size = 10;

    for (int i = 0; i < size; i++) { 
            scanf("%d", &numbers[i]);
        
    }

    displayArray(numbers, size);

    return 0;
}

