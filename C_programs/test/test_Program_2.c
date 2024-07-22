#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "Program_2.h"

int print_test_case(int const num, const char* input, const int expected_output, const int actual_output)
{
    printf("\nTest Case %d :\n",num);
    printf("Input : %s\n", input);
    printf("Expected Output : %d\n", expected_output);
    printf("Actual Output : %d\n", actual_output);

    if(expected_output != actual_output)
    {
        printf("Result: Test case failed\n");
        return 0;
    }
    printf("Result: Test case passed\n");
    return 1;
}

void test_find_max_diff() {
    // Test cases
    int arr1[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    assert(print_test_case(1, "[34, 8, 10, 3, 2, 80, 30, 33, 1]", 6, find_max_diff(arr1, 9)));

    int arr2[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    assert(print_test_case(2, "[9, 2, 3, 4, 5, 6, 7, 8, 18, 0]", 8, find_max_diff(arr2, 10)));

    int arr3[] = {1, 2, 3, 4, 5, 6};
    assert(print_test_case(3, "[1, 2, 3, 4, 5, 6]", 5, find_max_diff(arr3, 6)));

    int arr4[] = {6, 5, 4, 3, 2, 1};
    assert(print_test_case(4, "[6, 5, 4, 3, 2, 1]", 0, find_max_diff(arr4, 6)));

    printf("All tests passed!\n");
}

int main() {
    test_find_max_diff();
    return 0;
}
