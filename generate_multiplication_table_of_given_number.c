#include <stdio.h>

int main() {
    int num, i,last_num;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    printf("Enter last number to print its multiplication table: ");
    scanf("%d", &last_num);

    printf("\nMultiplication Table of %d:\n", num);
    printf("--------------------------\n");
    for (i = 1; i <=last_num; ++i) {
        printf("%d x %2d = %d\n", num, i, num * i);
    }
    return 0;
}
