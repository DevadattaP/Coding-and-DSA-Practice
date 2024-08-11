package com.example.programs;

import java.util.Arrays;

public class Program_7 {
    // Method to find common elements in three sorted arrays
    public static int[] findCommonElements(int[] arr1, int[] arr2, int[] arr3) {
        int i = 0, j = 0, k = 0;
        int minSize = Math.min(Math.min(arr1.length, arr2.length), arr3.length);
        int[] result = new int[minSize]; // Allocate maximum possible size
        int index = 0;

        // Iterate through all arrays to find common elements
        while (i < arr1.length && j < arr2.length && k < arr3.length) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                result[index++] = arr1[i]; // Add common element
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

        // Trim the result array to the actual number of common elements found
        return Arrays.copyOf(result, index);
    }
}
/*
        Set<Integer> set1 = new HashSet<>(Arrays.asList(arr1));
        Set<Integer> set2 = new HashSet<>(Arrays.asList(arr2));
        Set<Integer> set3 = new HashSet<>(Arrays.asList(arr3));
        // Find common elements
        set1.retainAll(set2);
        set1.retainAll(set3);
        return set1;
 */