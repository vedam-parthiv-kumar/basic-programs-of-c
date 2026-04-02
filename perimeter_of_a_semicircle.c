#include <stdio.h>

int main() {
    float radius, perimeter;
    float pi = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    perimeter = (pi * radius) + (2 * radius);

    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
