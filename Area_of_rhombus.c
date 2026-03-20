#include <stdio.h>

int main() {
    float d1, d2, area;

    printf("Enter the length of first diagonal: ");
    scanf("%f", &d1);
    printf("Enter the length of second diagonal: ");
    scanf("%f", &d2);

    area = 0.5 * d1 * d2;

    printf("Area of the rhombus: %.2f\n", area);

    return 0;
}
