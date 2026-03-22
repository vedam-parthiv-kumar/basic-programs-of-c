#include <stdio.h>

int main() {
    float length, breadth, height;
    float volume, surface_area;

    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);
    printf("Enter the breadth of the cuboid: ");
    scanf("%f", &breadth);
    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    volume = length * breadth * height;
    surface_area = 2 * (length * breadth + breadth * height + height * length);

    printf("\nResults for the Cuboid:\n");
    printf("Volume: %.2f cubic units\n", volume);
    printf("Total Surface Area: %.2f square units\n", surface_area);

    return 0;
}
