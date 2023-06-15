#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    unsigned int hexExponent = exponent;
    unsigned int binaryExponent = exponent;

    printf("Exponent in hexadecimal: 0x%X\n", hexExponent);
    
    // Convert to binary
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (binaryExponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}
