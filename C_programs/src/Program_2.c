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
