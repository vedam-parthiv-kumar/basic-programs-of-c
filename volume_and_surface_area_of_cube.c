#include <stdio.h>

int main() 
{
    float side, volume, surface_area;

    printf("Enter the length of the side: ");
    scanf("%f", &side);

    volume = side * side * side;
    surface_area = 6 * side * side;

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surface_area);

    return 0;
}
