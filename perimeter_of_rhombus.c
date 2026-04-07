#include <stdio.h>
#include <math.h>

int main() {
    float side, perimeter;

    printf("Enter the side of the rhombus: ");
    scanf("%f", &side);

    perimeter = 4 * side;

    printf("The perimeter of the rhombus is: %.2f\n", perimeter);

    return 0;
}
