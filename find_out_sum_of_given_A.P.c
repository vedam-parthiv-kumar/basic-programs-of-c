#include <stdio.h>

int main() {
    int a, n, d, i, sum = 0, currentTerm;

    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        currentTerm = a + (i * d);
        sum += currentTerm;
    }

    printf("Sum of the AP series is: %d\n", sum);

    return 0;
}
