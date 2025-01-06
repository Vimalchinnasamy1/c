#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;
    int not_result = ~a;
    int left_shift = a << 1;
    int right_shift = a >> 1;

    printf("AND: %d\n", and_result);
    printf("OR: %d\n", or_result);
    printf("XOR: %d\n", xor_result);
    printf("NOT: %d\n", not_result);
    printf("Left Shift: %d\n", left_shift);
    printf("Right Shift: %d\n", right_shift);

    return 0;
}
