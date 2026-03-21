#include <stdio.h>

int main()
{
    int year, last_two_digits;

    printf("Enter a four-digit year: ");
    scanf("%d", &year);

    last_two_digits = year % 100;

    printf("Last two digits: %02d\n", last_two_digits);

    return 0;
}
