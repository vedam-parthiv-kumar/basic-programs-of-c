#include <stdio.h>

int main() {
    int i; float f; double d; char c;
    int arr[5];

    printf("Size of int: %zu bytes\n", sizeof(i));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(c));

    printf("Size of array: %zu bytes\n", sizeof(arr));
    printf("Number of elements: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
