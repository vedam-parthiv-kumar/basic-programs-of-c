#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("\nThe calculated length is: %d\n", length);

    return 0;
}
