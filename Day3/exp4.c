#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int i, number, smallest = 9, largest = 0;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        while (number > 0) {
            int digit = number % 10;

            if (digit < smallest)
                smallest = digit;
            
            if (digit > largest)
                largest = digit;

            number /= 10;
        }
    }

    if (smallest == 9 && largest == 0) {
        printf("No digits found\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }

    return 0;
}