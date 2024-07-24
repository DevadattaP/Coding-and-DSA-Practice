#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <Utils.h>
#include "Program_5.h"


void test_concatenateArrayTwice() {
    int arr1[] = {1, 2, 1};
    int expected1[] = {1, 2, 1, 1, 2, 1};
    constexpr int size1 = ARRAY_SIZE(arr1);
    int* actual = concatenateArrayTwice(arr1, size1);
    print_test_case(1, "array", "array", arr1, size1, expected1, actual, size1*2);
    assert(compare_arrays(actual, expected1, size1));

    int arr2[] = {1, 3, 2, 1};
    int expected2[] = {1, 3, 2, 1, 1, 3, 2, 1};
    constexpr int size2 = ARRAY_SIZE(arr2);
    int* actual1 = concatenateArrayTwice(arr2, size2);
    print_test_case(2, "array", "array", arr2, size2, expected2, actual1, size2*2);
    assert(compare_arrays(actual1, expected2, size2));

    printf("\nAll tests passed!\n");
}

int main() {
    test_concatenateArrayTwice();
    return 0;
}
