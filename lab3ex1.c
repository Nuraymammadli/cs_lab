
#include <stdio.h>

int main() {
    int n, sum = 0, x = 1 , product;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x = 2 * i + 1;
        sum += x;
        product *=x;
    }

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", x);


    return 0;
}
