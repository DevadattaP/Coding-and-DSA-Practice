#include <stdlib.h>
#include <Program_5.h>

int* concatenateArrayTwice(int arr[], const int size) {
    // Create a new array of double the size
    const int newSize = size * 2;
    int* newArr = malloc(newSize * sizeof(int));

    // Copy elements of the original array into the new array twice
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
        newArr[i + size] = arr[i];
    }

    return newArr;
}