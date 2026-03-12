#include <stdio.h>

int add_bitwise(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = (unsigned int)carry << 1;
    }
    return a;
}

int subtract(int a, int b) {
    return add_bitwise(a, add_bitwise(~b, 1));
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result: %d\n", subtract(num1, num2));

    return 0;
}
