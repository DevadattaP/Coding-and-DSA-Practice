package com.example.utils;

public class TestUtils {

    // Universal method to print test cases
    public static void printTestCase(int num, Object input, Object expectedOutput, Object actualOutput) {
        System.out.println("\nTest Case " + num + ":");
        System.out.println("Input: " + formatObject(input));
        System.out.println("Expected Output: " + formatObject(expectedOutput));
        System.out.println("Actual Output: " + formatObject(actualOutput));

        if (equals(expectedOutput, actualOutput)) {
            System.out.println("\033[32mResult: Test case passed\033[0m"); // Green for pass
        } else {
            System.out.println("\033[31mResult: Test case failed\033[0m"); // Red for fail
        }
    }

    // Format objects for printing
    private static String formatObject(Object obj) {
        return switch (obj) {
            case int[] n -> arrayToString(n); // for 1D int arrays
            case int[][] n -> arrayToString(n); // for 2D int arrays
            case String s -> s; // for Strings
            case Number ignored -> obj.toString(); // for Numbers
            case null, default -> obj != null ? obj.toString() : "null"; // for anything else
        };
    }

    /// Convert integer array to string (1D array)
    private static String arrayToString(int[] arr) {
        if (arr == null || arr.length == 0) return "[]";
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        for (int i = 0; i < arr.length; i++) {
            sb.append(arr[i]);
            if (i < arr.length - 1) sb.append(", ");
        }
        sb.append("]");
        return sb.toString();
    }

    // Convert 2D integer array to string (2D array)
    private static String arrayToString(int[][] arr) {
        if (arr == null || arr.length == 0) return "[]";
        StringBuilder sb = new StringBuilder();
        sb.append("[\n");
        for (int i = 0; i < arr.length; i++) {
            sb.append("  ").append(arrayToString(arr[i])); // use arrayToString for each row
            if (i < arr.length - 1) sb.append(",\n");
        }
        sb.append("\n]");
        return sb.toString();
    }

    // Compare objects for equality
    private static boolean equals(Object expected, Object actual) {
        if (expected instanceof int[] && actual instanceof int[]) {
            return arrayEquals((int[]) expected, (int[]) actual);
        } else {
            return expected.equals(actual);
        }
    }

    // Compare integer arrays
    private static boolean arrayEquals(int[] arr1, int[] arr2) {
        if (arr1 == null || arr2 == null) return arr1 == arr2;
        if (arr1.length != arr2.length) return false;
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != arr2[i]) return false;
        }
        return true;
    }
}
