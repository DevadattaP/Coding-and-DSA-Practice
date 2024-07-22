#include <assert.h>
#include <stdio.h>
#include "Program_3.h"

int compare_arrays(const int* arr1, const int* arr2, const int n) {
    for (int i = 0; i < n; ++i) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

void print_array(const int* arr, const int n) {
    printf("[");
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int print_test_case(const int num, int* input, const int n, const int* expected_output) {
    printf("\nTest Case %d :\n", num);
    printf("Input : ");
    print_array(input, n);
    printf("\nExpected Output : ");
    print_array(expected_output, n);

    const int* actual_output = rearrangeArray(input, n);

    printf("\nActual Output : ");
    print_array(actual_output, n);
    printf("\n");

    if (!compare_arrays(expected_output, actual_output, n)) {
        printf("Result: Test case failed\n");
        return 0;
    }
    printf("Result: Test case passed\n");
    return 1;
}

void test_rearrangeArray() {
    // Test cases
    int arr1[] = {1, 2, 3, -4, -1, 4};
    constexpr int expected1[] = {-4, 1, -1, 2, 3, 4};
    assert(print_test_case(1, arr1, 6, expected1));

    int arr2[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    constexpr int expected2[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0};
    assert(print_test_case(2, arr2, 10, expected2));

    printf("All tests passed!\n");
}

int main() {
    test_rearrangeArray();
    return 0;
}
