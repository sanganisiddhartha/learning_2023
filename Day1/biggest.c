#include <stdio.h>

int biggest_if_else(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int biggest_ternary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2,n;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
     
    int result1 = biggest_if_else(num1, num2);
    printf("The biggest number is(using if else): %d\n", result1);
   
    int result2 = biggest_ternary(num1, num2);
    printf("The biggest number is(using ternary): %d\n", result2);
    
    return 0;
}
