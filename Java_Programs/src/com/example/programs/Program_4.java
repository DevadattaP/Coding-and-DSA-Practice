package com.example.programs;

public class Program_4 {
    public static int findMissingNumber(int[] arr) {
        int size = arr.length;

        // Calculate the sum of the first N natural numbers
        int n = size + 1;
        int totalSum = n * (n + 1) / 2;

        // Calculate the sum of elements in the given array
        int arraySum = 0;
        for (int num : arr) {
            arraySum += num;
        }

        // The missing number is the difference between the expected sum and the actual sum
        return totalSum - arraySum;
    }
}
