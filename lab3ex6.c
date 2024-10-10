<<<<<<< HEAD
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
=======
#include <stdio.h>

int main() {
    int n, height;
    int tallest = 0, shortest = 0;

    printf("Please enter the number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of students.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Please enter height for student %d: ", i + 1);
        scanf("%d", &height);

        if (height <= 0) {
            printf("Please enter a valid height for student %d.\n", i + 1);
            i--;
            continue;
        }

        if (i == 0) {
            tallest = height;
            shortest = height;
        } else {
            if (height > tallest) {
                tallest = height;
            }
            if (height < shortest) {
                shortest = height;
            }
        }
    }

    printf("Tallest height: %d\n", tallest);
    printf("Shortest height: %d\n", shortest);
>>>>>>> 831c033 (Initial commit)

    return 0;
}
