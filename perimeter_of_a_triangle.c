#include <stdio.h>

int main() {
    float a, b, c, perimeter;

    printf("Enter the three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        perimeter = a + b + c;
        printf("Perimeter: %.2f\n", perimeter);
    } else {
        printf("Invalid triangle sides.\n");
    }

    return 0;
}
