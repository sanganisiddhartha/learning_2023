#include <stdio.h>

int sumofalternateelements(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    

    int result = sumofalternateelements(arr);
    printf("Sum of alternate elements: %d\n", result);

    return 0;
}