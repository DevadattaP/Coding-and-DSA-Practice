#ifndef UTILS_H
#define UTILS_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// #define RED "\033[91m"
// #define GREEN "\033[92m"
// #define RESET "\033[0m"
#define RED ""
#define GREEN ""
#define RESET ""

// Macro to get the size of an array
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

// Helper function to compare two arrays
int compare_arrays(const int* arr1, const int* arr2, const int n);

// Helper function to print an array
void print_array(const int* arr, const int n);

// Function to print test cases for different types of inputs
void print_test_case(const int num, const char* input_type, const char* output_type, ...);

#endif // UTILS_H
