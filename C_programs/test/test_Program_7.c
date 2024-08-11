#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <Utils.h>
#include "Program_7.h"


void test_findCommonElements() {
    // Test Case 1
    int ar1_1[] = {1, 2, 3};
    int ar2_1[] = {2, 3, 4};
    int ar3_1[] = {3, 4, 5};
    int expected_1[] = {3};
    int exp_size_1 = ARRAY_SIZE(expected_1);
    int size1_1 = ARRAY_SIZE(ar1_1);
    int size2_1 = ARRAY_SIZE(ar2_1);
    int size3_1 = ARRAY_SIZE(ar3_1);
    int* result_1 = find_common_elements(ar1_1, size1_1, ar2_1, size2_1, ar3_1, size3_1);
    print_test_case(1, "3arrays", "array", ar1_1, ar2_1, ar3_1, size1_1, size2_1, size3_1, expected_1, result_1, exp_size_1);
    assert(compare_arrays(expected_1, result_1, exp_size_1));

    // Test Case 2
    int ar1_2[] = {10, 20, 30};
    int ar2_2[] = {20, 25, 30};
    int ar3_2[] = {20, 30, 40};
    int expected_2[] = {20, 30};
    int exp_size_2 = ARRAY_SIZE(expected_2);
    int size1_2 = sizeof(ar1_2) / sizeof(ar1_2[0]);
    int size2_2 = sizeof(ar2_2) / sizeof(ar2_2[0]);
    int size3_2 = sizeof(ar3_2) / sizeof(ar3_2[0]);
    int* result_2 = find_common_elements(ar1_2, size1_2, ar2_2, size2_2, ar3_2, size3_2);
    print_test_case(2, "3arrays", "array", ar1_2, ar2_2, ar3_2, size1_2, size2_2, size3_2, expected_2, result_2, exp_size_2);
    assert(compare_arrays(expected_2, result_2, exp_size_2));

    // Test Case 3
    int ar1_3[] = {1, 3, 5};
    int ar2_3[] = {2, 4, 6};
    int ar3_3[] = {7, 8, 9};
    int expected_3[] = {};
    int exp_size_3 = ARRAY_SIZE(expected_3);
    int size1_3 = sizeof(ar1_3) / sizeof(ar1_3[0]);
    int size2_3 = sizeof(ar2_3) / sizeof(ar2_3[0]);
    int size3_3 = sizeof(ar3_3) / sizeof(ar3_3[0]);
    int* result_3 = find_common_elements(ar1_3, size1_3, ar2_3, size2_3, ar3_3, size3_3);
    print_test_case(3, "3arrays", "array", ar1_3, ar2_3, ar3_3, size1_3, size2_3, size3_3, expected_3, result_3, exp_size_3);
    assert(compare_arrays(expected_3, result_3, exp_size_3));

    printf("\nAll tests passed!\n");
}

int main() {
    test_findCommonElements();
    return 0;
}
