//Given an integer. Remove the zeros from it and print the resulting number

#include <stdio.h>

int main() {
    int num, result = 0, k = 1;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int negative = (num < 0);
    if (negative) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            result = digit * k + result;
            k *= 10;
        }
        num /= 10;
    }

    if (negative) {
        printf("-%d\n", result);
    } else {
        printf("%d\n", result);
    }

    return 0;
}
