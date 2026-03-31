#include <stdio.h>

int main() {
    char paragraph[1000];

    printf("Enter your paragraph (type '~' and press Enter to finish):\n");

    scanf("%[^~]", paragraph);

    printf("\n--- You Entered ---\n%s", paragraph);

    return 0;
}
