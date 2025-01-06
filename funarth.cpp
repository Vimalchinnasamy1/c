#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else
        return 0.0;
}

int main() {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));
    return 0;
}

