package com.example.programs;

public class Program_2 {
    public static int findMaxDiff(int[] arr) {
        int maxDiff = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = arr.length - 1; j > i; j--) {
                if (arr[j] > arr[i] && maxDiff < (j - i)) {
                    maxDiff = j - i;
                }
            }
        }
        return maxDiff;
    }
}
