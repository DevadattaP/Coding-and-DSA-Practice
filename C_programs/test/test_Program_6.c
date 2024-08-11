#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <Utils.h>
#include "Program_6.h"


void test_maxPathSum() {
    int ar1_1[] = {2, 3, 7, 10, 12};
    int ar2_1[] = {1, 5, 7, 8};
    constexpr int size1_1 = ARRAY_SIZE(ar1_1);
    constexpr int size2_1 = ARRAY_SIZE(ar2_1);
    const int actual_1 = maxPathSum(ar1_1, ar2_1, size1_1, size2_1);
    print_test_case(1, "2arrays", "int", ar1_1, ar2_1, size1_1, size2_1, 35, actual_1);
    assert(actual_1 == 35);

    int ar1_2[] = {10, 12};
    int ar2_2[] = {5, 7, 9};
    constexpr int size1_2 = ARRAY_SIZE(ar1_2);
    constexpr int size2_2 = ARRAY_SIZE(ar2_2);
    const int actual_2 = maxPathSum(ar1_2, ar2_2, size1_2, size2_2);
    print_test_case(2, "2arrays", "int", ar1_2, ar2_2, size1_2, size2_2, 22, actual_2);
    assert(actual_2 == 22);

    int ar1_3[] = {2, 3, 7, 10, 12, 15, 30, 34};
    int ar2_3[] = {1, 5, 7, 8, 10, 15, 16, 19};
    constexpr int size1_3 = ARRAY_SIZE(ar1_3);
    constexpr int size2_3 = ARRAY_SIZE(ar2_3);
    const int actual_3 = maxPathSum(ar1_3, ar2_3, size1_3, size2_3);
    print_test_case(3, "2arrays", "int", ar1_3, ar2_3, size1_3, size2_3, 122, actual_3);
    assert(actual_3 == 122);

    printf("\nAll tests passed!\n");
}

int main() {
    test_maxPathSum();
    return 0;
}
