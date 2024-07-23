#include <assert.h>
#include "Utils.h"
#include "Program_2.h"

void test_find_max_diff() {
    // Define test cases
    int arr1[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int arr2[] = {9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    int arr3[] = {1, 2, 3, 4, 5, 6};
    int arr4[] = {6, 5, 4, 3, 2, 1};

    int* arrays[] = {arr1, arr2, arr3, arr4};
    constexpr int sizes[] = {ARRAY_SIZE(arr1), ARRAY_SIZE(arr2), ARRAY_SIZE(arr3), ARRAY_SIZE(arr4)};
    constexpr int expected_outputs[] = {6, 8, 5, 0};

    // Run test cases
    for (int i = 0; i < ARRAY_SIZE(arrays); ++i) {
        const int actual_output = find_max_diff(arrays[i], sizes[i]);
        print_test_case(i + 1, "array", "int", arrays[i], sizes[i], expected_outputs[i], actual_output);
        assert(expected_outputs[i] == actual_output);
    }
}

int main() {
    test_find_max_diff();
    return 0;
}
