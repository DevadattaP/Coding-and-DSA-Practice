#include <assert.h>
#include "Program_1.h"
#include "Utils.h"


void test_check_even_odd() {
    constexpr int inputs[] = {0, 1, 20, 315, -1230, -67};
    const char* expected_outputs[] = {"Even", "Odd", "Even", "Odd", "Even", "Odd"};
    constexpr int num_test_cases = sizeof(inputs) / sizeof(inputs[0]);

    for (int i = 0; i < num_test_cases; ++i) {
        const char* actual_output = check_even_odd(inputs[i]);
        print_test_case(i + 1, "int", "str", inputs[i], expected_outputs[i], actual_output);
        assert(strcmp(expected_outputs[i], actual_output) == 0);
    }
}


int main() {
    test_check_even_odd();
    return 0;
}
