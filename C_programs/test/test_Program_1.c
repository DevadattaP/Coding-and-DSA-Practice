#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "Program_1.h"

int print_test_case(int const num, const char* input, const char* expected_output, const char* actual_output)
{
    printf("\nTest Case %d :\n",num);
    printf("Input : %s\n", input);
    printf("Expected Output : %s\n", expected_output);
    printf("Actual Output : %s\n", actual_output);

    if(strcmp(expected_output, actual_output)!=0)
    {
        printf("Result: Test case failed\n");
        return 0;
    }
    printf("Result: Test case passed\n");
    return 1;
}
void test_check_even_odd() {
    // Test cases
    assert(print_test_case(1,"0", "Even",check_even_odd(0)));
    assert(print_test_case(2,"1", "Odd",check_even_odd(1)));
    assert(print_test_case(3,"20", "Even",check_even_odd(20)));
    assert(print_test_case(4,"315", "Odd",check_even_odd(315)));
    assert(print_test_case(5,"-1230", "Even",check_even_odd(-1230)));
    assert(print_test_case(6,"-67", "Odd",check_even_odd(-67)));

    printf("All tests passed!\n");
}

int main() {
    test_check_even_odd();
    return 0;
}
