#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    n = 10;
    arr = (int *)realloc(arr, n * sizeof(int));
	printf("\n");	
    for (int i = 5; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    return 0;
}

