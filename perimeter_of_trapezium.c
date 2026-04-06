#include <stdio.h>

int main() {
    float a, b, c, d, perimeter;

    printf("Enter the lengths of the four sides: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    perimeter = a + b + c + d;

    printf("The perimeter of the trapezium is: %.2f\n", perimeter);

    return 0;
}
