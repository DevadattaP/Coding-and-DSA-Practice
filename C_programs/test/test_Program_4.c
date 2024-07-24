#include <assert.h>
#include "Utils.h"
#include "Program_4.h"

void test_findMissingNumber() {
    // Define test cases
    int arr1[] = {1, 2, 4, 6, 3, 7, 8};
    int arr2[] = {1, 2, 3, 5};

    int* arrays[] = {arr1, arr2};
    constexpr int sizes[] = {ARRAY_SIZE(arr1), ARRAY_SIZE(arr2)};
    constexpr int expected_outputs[] = {5, 4};

    // Run test cases
    for (int i = 0; i < ARRAY_SIZE(arrays); ++i) {
        const int actual_output = findMissingNumber(arrays[i], sizes[i]);
        print_test_case(i + 1, "array", "int", arrays[i], sizes[i], expected_outputs[i], actual_output);
        assert(expected_outputs[i] == actual_output);
    }
}

int main() {
    test_findMissingNumber();
    return 0;
}
