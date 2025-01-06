#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%1d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n / 2; i++) {
        printf("%d", arr[i]);
    }

    for (int i = n - 1; i >= n / 2; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}

