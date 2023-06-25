#include <stdio.h>

void print_num(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    
}

void print_spaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void print_numbers(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    
}

int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = n; i >=1; i--) {
        print_num(i);
        print_spaces(2 * (n - i));
        print_numbers(i);
        printf("\n");
    }
    
    return 0;
}