#include <stdio.h>

int main() {
    float a, b, h, area;

    printf("Enter the lengths of the two parallel sides and the height: \n");
    scanf("%f %f %f", &a, &b, &h);

    area = 0.5 * (a + b) * h;

    printf("The area of the trapezium is: %.2f\n", area);

    return 0;
}
