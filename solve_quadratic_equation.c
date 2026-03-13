#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, disc, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) { printf("Not a quadratic equation.\n"); return 1; }

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("Real and distinct: %.2lf, %.2lf\n", r1, r2);
    } else if (disc == 0) {
        printf("Real and equal: %.2lf\n", -b / (2 * a));
    } else {
        printf("Complex: %.2lf+%.2lfi, %.2lf-%.2lfi\n", -b/(2*a), sqrt(-disc)/(2*a), -b/(2*a), sqrt(-disc)/(2*a));
    }
    return 0;
}
