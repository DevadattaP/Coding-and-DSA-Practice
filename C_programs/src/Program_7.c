//
// Created by DELL on 11-08-2024.
//
#include <Program_7.h>
#include <stdlib.h>

// Function to find and print common elements
int* find_common_elements(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3) {
    int i = 0, j = 0, k = 0;
    int min_size = n1<n2 ? (n1<n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
    int *result = malloc(min_size * sizeof(int)); // Allocate memory for result
    int index = 0;
    // Iterate through all arrays and find common elements
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            result[index++] = arr1[i]; // add common element
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
    return result;
}
