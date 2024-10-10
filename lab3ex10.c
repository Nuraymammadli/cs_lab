#include <stdio.h>

int main() {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        for (int num = a; num <= b; num++) {
            if (num % c == 0) {
                printf("%d ", num);
            }
        }
        printf("\n"); 
    }

    return 0;
}
