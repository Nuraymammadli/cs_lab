#include <stdio.h>
#include <math.h>
int main() {
    int number, digit, sum = 0;

    printf("Enter integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;

        if (digit % 2 == 0) {
            sum += digit;
        }

        number = number / 10;
    }

    printf("sum: %d\n", sum);

    return 0;
}
