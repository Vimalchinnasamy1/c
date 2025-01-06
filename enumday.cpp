#include <stdio.h>

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Days day;
    int input;

    scanf("%d", &input);

    if (input < 0 || input > 6) {
        printf("Invalid input\n");
    } else {
        day = (enum Days)input;
        switch (day) {
            case Sunday:    printf("Sunday\n"); break;
            case Monday:    printf("Monday\n"); break;
            case Tuesday:   printf("Tuesday\n"); break;
            case Wednesday: printf("Wednesday\n"); break;
            case Thursday:  printf("Thursday\n"); break;
            case Friday:    printf("Friday\n"); break;
            case Saturday:  printf("Saturday\n"); break;
        }
    }

    return 0;
}

