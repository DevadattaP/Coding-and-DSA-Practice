#include <Program_3.h>

int* rearrangeArray(int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] >= 0) { // Even index, should be positive
            // Find the next negative number
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < 0) {
                    const int temp = arr[j];
                    // Shift elements to the right
                    for (int k = j; k > i; k--) {
                        arr[k] = arr[k - 1];
                    }
                    arr[i] = temp;
                    break;
                }
            }
        } else if (i % 2 == 1 && arr[i] < 0) { // Odd index, should be negative
            // Find the next positive number
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= 0) {
                    const int temp = arr[j];
                    // Shift elements to the right
                    for (int k = j; k > i; k--) {
                        arr[k] = arr[k - 1];
                    }
                    arr[i] = temp;
                    break;
                }
            }
        }
    }
    return arr;
}
