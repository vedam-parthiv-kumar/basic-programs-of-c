#include <stdio.h>

int main() {
    float base, side, perimeter;

    printf("Enter the base and the adjacent side: ");
    scanf("%f %f", &base, &side);

    perimeter = 2 * (base + side);

    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
