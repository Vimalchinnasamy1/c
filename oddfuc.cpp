#include <stdio.h>

int sumDigits(long num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void checkOddEven(int sum) {
    if (sum % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main() {
    long number;
    scanf("%ld", &number);
    int result = sumDigits(number);
    checkOddEven(result);
    return 0;
}

