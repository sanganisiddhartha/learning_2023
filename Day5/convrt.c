#include <stdio.h>

int main() {
    char str[] = "625278"; // 
    int res = 0;
    int i = 0; 

    while (str[i] != '\0') {
        int ival = str[i] - '0'; // Convert character to integer value
        res = res * 10 + ival; 
        i++; // 
    }

    printf("Converted integer value: %d\n", res);

    return 0;
}