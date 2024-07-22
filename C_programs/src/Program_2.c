//
// Created by DELL on 22-07-2024.
//
# include <Program_2.h>

int find_max_diff(int arr[], const int n) {
    int maxDiff = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (arr[j] > arr[i] && maxDiff < (j - i))
                maxDiff = j - i;
        }
    }

    return maxDiff;
}
// T&P Activity No. 31
// Date- 22/03/2024
//
// Given an array arr[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of arr[i] <= arr[j].
// {34, 8, 10, 3, 2, 80, 30, 33, 1}
// output = 6 ( j = 7 , i = 1 )
// {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}
// Output: 8 (j = 8 , i = 0 )
// {1, 2, 3, 4, 5, 6}
// output = 5 ( j = 5 i = 0 )
// {6, 5, 4, 3, 2, 1}
// 0