#include <stdio.h>

int main() {
    int hex, binary = 0, i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%x", &hex);
    while (hex > 0) {
        if (hex % 2 == 1) {
            binary += (1 << i);
        }
        hex /= 2;
        i++;
    }

    printf("The binary equivalent is: %d\n", binary);

    return 0;
}
