#include <stdio.h>
#include <math.h>

int main() {
    float x0, y0, radius;
    printf("Enter the circle center (x0 y0) and radius: ");
    scanf("%f %f %f", &x0, &y0, &radius);
    
    float radius_squared = radius * radius;

    printf("Enter points (xi yi):\n");
    
    float xi, yi;
    while (scanf("%f %f", &xi, &yi) != EOF) {
        float distance_squared = (xi - x0) * (xi - x0) + (yi - y0) * (yi - y0);

        if (distance_squared == radius_squared) {
            printf("Point (%.2f, %.2f) is ON the circle\n", xi, yi);
        } else if (distance_squared < radius_squared) {
            printf("Point (%.2f, %.2f) is INSIDE the circle\n", xi, yi);
        } else {
            printf("Point (%.2f, %.2f) is OUTSIDE the circle\n", xi, yi);
        }
    }

    return 0;
}