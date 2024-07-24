//
// Created by DELL on 24-07-2024.
//
#include "Program_4.h"

int findMissingNumber(int arr[], const int size) {
    // Calculate the sum of the first N natural numbers
    const int n = size + 1;
    const int total_sum = n * (n + 1) / 2;

    // Calculate the sum of elements in the given array
    int array_sum = 0;
    for (int i = 0; i < size; i++) {
        array_sum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    return total_sum - array_sum;
}