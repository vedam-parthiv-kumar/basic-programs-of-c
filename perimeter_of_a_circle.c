#include <stdio.h>

int main() {
    float radius, perimeter;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;

    printf("The perimeter (circumference) is: %.2f\n", perimeter);

    return 0;
}
