#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toggleCase(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: %s", str);

    toggleCase(str);

    printf("Toggled case string: %s", str);

    return 0;
}