#include <stdio.h>

int main() {
    int n;
    float sum = 0.0f, number;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &number);
        sum += number;
    }

    printf("%.3f\n", sum);

    return 0;
}
