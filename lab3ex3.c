#include <stdio.h>

int main() {
    int n;
    float sum = 0.0f;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = (sum + 1.0f) / i;
    }

    printf("%.3f\n", sum);

    return 0;
}
