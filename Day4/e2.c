#include <stdio.h>

#define SIZE 5 

int main() {
    int array[SIZE] = {3, 1, 4, 2, 5};
    int min = array[0]; 
    int max = array[0]; 
    int i;


    for (i = 1; i < SIZE; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }


    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}