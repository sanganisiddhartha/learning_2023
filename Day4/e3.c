#include <stdio.h>

#define SIZE 5 

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = SIZE - 1;
    int temp;


    while (start < end) {

        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // Move start index towards the end
        start++;

        // Move end index towards the start
        end--;
    }

    printf("Reversed Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}