#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next = 0;

    printf("Enter the maximum value: ");
    scanf("%d", &limit);

    printf("Fibonacci Series: ");

    while (next <= limit) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}
