
//Exercise 1. Given a sequence represented by: 𝑥𝑖 = 3 ∗ 𝑖 − 1
//So, the elements of the sequence are [2, 5, 8, 11, ....]
//Write a program to find out the sum and the product of the first n elements of the sequence given an integer in range [1, ∞)
#include <stdio.h>
int main() {
    int n, i = 1 , sum = 0, product = 1;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("The entered value must be 1 or greater.\n");
        return 1;
    }

    while (i <= n) {
        int xi = 3 * i - 1;
        sum += xi;
        product *= xi;
        i++;
    }

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
