//
// Created by DELL on 22-07-2024.
//
# include <Program_3.h>

int* rearrangeArray(int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] >= 0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < 0) {
                    const int temp = arr[j];
                    for (int k = j; k > i; k--) {
                        arr[k] = arr[k - 1];
                    }
                    arr[i] = temp;
                    break;
                }
            }
        } else if (i % 2 == 1 && arr[i] < 0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] >= 0) {
                    const int temp = arr[j];
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
// T&P Activity No. 39
// 8/7/2024
//
// Rearrange array in alternating positive & negative items with O(1) extra space
// Given an array having and, our task is to arrange them in an fashion such that every positive number is followed by a negative number and vice-versa maintaining the. The number of positive and negative numbers need not to be equal. If there are more positive numbers then they have to appear at the end of the array, same condition for negative numbers also.
// input = arr[] = {1, 2, 3, -4, -1, 4}
// output = arr[] = {-4, 1, -1, 2, 3, 4}
// input = arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// output = arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}