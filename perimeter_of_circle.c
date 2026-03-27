#include <stdio.h>

int main() {
    double radius, perimeter;
    const double PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    perimeter = 2 * PI * radius;

    printf("Perimeter of the circle: %.2lf\n", perimeter);

    return 0;
}
