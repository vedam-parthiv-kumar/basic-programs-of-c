#include <stdio.h>

int main() {
    float a, b, c, perimeter;

    printf("Enter the lengths of the three sides: ");
    if (scanf("%f %f %f", &a, &b, &c) == 3) {
        perimeter = a + b + c;
        printf("The perimeter of the triangle is: %.2f\n", perimeter);
    } else {
        printf("Invalid input. Please enter numbers.\n");
    }

    return 0;
}
