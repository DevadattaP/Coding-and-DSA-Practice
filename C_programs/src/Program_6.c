#include <Program_6.h>

// Function to find the maximum sum path between two arrays
int maxPathSum(int ar1[], int ar2[], int m, int n) {
    int i = 0, j = 0;
    int result = 0, sum1 = 0, sum2 = 0;

    // Traverse both arrays
    while (i < m && j < n) {
        // Add elements of ar1 to sum1 if ar1[i] is smaller
        if (ar1[i] < ar2[j]) {
            sum1 += ar1[i++];
        }
        // Add elements of ar2 to sum2 if ar2[j] is smaller
        else if (ar1[i] > ar2[j]) {
            sum2 += ar2[j++];
        }
        // If both are same, add the maximum of sum1 and sum2 to result
        else {
            result += (sum1 > sum2 ? sum1 : sum2) + ar1[i];
            sum1 = sum2 = 0;
            i++;
            j++;
        }
    }

    // Add remaining elements of ar1[]
    while (i < m) {
        sum1 += ar1[i++];
    }

    // Add remaining elements of ar2[]
    while (j < n) {
        sum2 += ar2[j++];
    }

    // Add the maximum of remaining sum1 and sum2 to result
    result += (sum1 > sum2 ? sum1 : sum2);

    return result;
}
