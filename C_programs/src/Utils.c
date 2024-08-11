#include <Utils.h>

// Helper function to compare two arrays
int compare_arrays(const int* arr1, const int* arr2, const int n) {
    for (int i = 0; i < n; ++i) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

// Helper function to print an array
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

// Function to print test case
void print_test_case(const int num, const char* input_type, const char* output_type, ...) {
    va_list args;
    va_start(args, output_type);

    printf("\nTest Case %d :\n", num);

    if (strcmp(input_type, "int") == 0) {
        const int input = va_arg(args, int);
        printf("Input : %d\n", input);
    } else if (strcmp(input_type, "str") == 0) {
        const char* input = va_arg(args, const char*);
        printf("Input : %s\n", input);
    } else if (strcmp(input_type, "array") == 0) {
        const int* input = va_arg(args, const int*);
        const int n = va_arg(args, int);
        printf("Input : ");
        print_array(input, n);
        printf("\n");
    } else if (strcmp(input_type, "2arrays") == 0) {
        const int* arr1 = va_arg(args, const int*);
        const int* arr2 = va_arg(args, const int*);
        const int n = va_arg(args, int);
        const int m = va_arg(args, int);
        printf("Input : ");
        print_array(arr1, n);
        printf(", ");
        print_array(arr2, m);
        printf("\n");
    } else if (strcmp(input_type, "3arrays") == 0) {
        const int* arr1 = va_arg(args, const int*);
        const int* arr2 = va_arg(args, const int*);
        const int* arr3 = va_arg(args, const int*);
        const int n = va_arg(args, int);
        const int m = va_arg(args, int);
        const int l = va_arg(args, int);
        printf("Input : ");
        print_array(arr1, n);
        printf(", ");
        print_array(arr2, m);
        printf(", ");
        print_array(arr3, l);
        printf("\n");
    }

    if (strcmp(output_type, "str") == 0) {
        const char* expected_output = va_arg(args, const char*);
        const char* actual_output = va_arg(args, const char*);
        printf("Expected Output : %s\n", expected_output);
        printf("Actual Output : %s\n", actual_output);
        if (strcmp(expected_output, actual_output) != 0) {
            printf(RED "Result: Test case failed" RESET "\n");
        } else {
            printf(GREEN "Result: Test case passed" RESET "\n");
        }
    } else if (strcmp(output_type, "array") == 0) {
        const int* expected_output = va_arg(args, const int*);
        const int* actual_output = va_arg(args, const int*);
        const int n = va_arg(args, int);
        printf("Expected Output : ");
        print_array(expected_output, n);
        printf("\nActual Output : ");
        print_array(actual_output, n);
        printf("\n");
        if (!compare_arrays(expected_output, actual_output, n)) {
            printf(RED "Result: Test case failed" RESET "\n");
        } else {
            printf(GREEN "Result: Test case passed" RESET "\n");
        }
    } else if (strcmp(output_type, "int") == 0) {
        const int expected_output = va_arg(args, int);
        const int actual_output = va_arg(args, int);
        printf("Expected Output : %d\n", expected_output);
        printf("Actual Output : %d\n", actual_output);
        if (expected_output != actual_output) {
            printf(RED "Result: Test case failed" RESET "\n");
        } else {
            printf(GREEN "Result: Test case passed" RESET "\n");
        }
    }

    va_end(args);
}

