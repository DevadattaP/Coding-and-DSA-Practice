#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <Utils.h>
#include "Program_3.h"


void test_rearrangeArray() {
    int arr1[] = {1, 2, 3, -4, -1, 4};
    int expected1[] = {-4, 1, -1, 2, 3, 4};
    constexpr int size1 = ARRAY_SIZE(arr1);

    // Create a copy of the input array for rearrangement
    int* arr_copy = (int*)malloc(size1 * sizeof(int));
    memcpy(arr_copy, arr1, size1 * sizeof(int));
    // Rearrange array and get result
    int* actual = rearrangeArray(arr_copy, size1);
    // Print and assert
    print_test_case(1, "array", "array", arr1, size1, expected1, actual, size1);
    assert(compare_arrays(actual, expected1, size1));
    // Free allocated memory
    // free(actual);
    // free(arr_copy);


    int arr2[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int expected2[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0};
    constexpr int size2 = ARRAY_SIZE(arr2);
    // Create a copy of the input array for rearrangement
    int* arr_copy1 = (int*)malloc(size2 * sizeof(int));
    memcpy(arr_copy1, arr2, size2 * sizeof(int));
    // Rearrange array and get result
    int* actual1 = rearrangeArray(arr_copy1, size2);
    // Print and assert
    print_test_case(2, "array", "array", arr2, size2, expected2, actual1, size2);
    assert(compare_arrays(actual1, expected2, size2));
    // Free allocated memory
    // free(actual1);
    // free(arr_copy1);

    printf("All tests passed!\n");
}

int main() {
    test_rearrangeArray();
    return 0;
}
