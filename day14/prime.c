#include <stdio.h>
#include <stdbool.h>

void check_prime(int input) {
    if (input <= 1) {
        printf("Not Prime\n");
        return;
    }

    for (int i = 2; i*i <= input; i++) {
        if (input % i == 0) {
            printf("Not Prime\n");
            return;
        }
    }

    printf("Prime\n");
}

int main() {
    printf("Enter a number: ");
    int input;
    if (scanf("%d", &input) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    check_prime(input);
    return 0;
}