#include <stdio.h>

int add(int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main() {
    int num1, num2, sum_result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum_result = add(num1, num2);

    printf("Sum is %d\n", sum_result);

    return 0;
}
