#include <stdio.h>

int main() {
    int a, b, k, sum = 0;

    printf("Enter two integer for the range [a, b]: ");
    scanf("%d %d", &a, &b);

    printf("Enter a divider k: ");
    scanf("%d", &k);

    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }

    while (a <= b) {
        if (a % k == 0) {
            sum += a;
        }
        a=a+1;
    }

    printf("The sum of elements divisible by %d in the range [%d, %d] is: %d\n", k, sum);

    return 0;
}
