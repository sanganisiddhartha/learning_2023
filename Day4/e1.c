#include <stdio.h>

float calculateSum(int arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

float calculateAverage(int arr[], int n) {
    float sum = calculateSum(arr, n);
    float avg = sum / n;
    return avg;
}

int main() {
    int arr[6];
    int n;
    printf("Enter the number of elements (up to 6): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float sum = calculateSum(arr, n);
    float avg = calculateAverage(arr, n);

    printf("Sum is %f and the average is %f\n", sum, avg);

    return 0;
}