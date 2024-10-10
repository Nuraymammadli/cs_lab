#include <stdio.h>

int main() {
    int n;
<<<<<<< HEAD
    float num, sum = 0.0;

    printf("Enter the number of floats (n): ");
    scanf("%d", &n);

    while (n > 0) {
        printf("Enter a float: ");
        scanf("%f", &num);
        sum += num;
        n--;
    }

    printf("Sum of the floats: %.1f\n", sum);

    return 0;
}
=======
    float sum = 0.0f, number;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &number);
        sum += number;
    }

    printf("%.3f\n", sum);

    return 0;
}
>>>>>>> 831c033 (Initial commit)
