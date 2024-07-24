package com.example.programs;

public class Program_5 {
    public static int[] concatenateArrayTwice(int[] arr) {
        int size = arr.length;
        int[] newArr = new int[size * 2];

        // Copy elements of the original array into the new array twice
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
            newArr[i + size] = arr[i];
        }

        return newArr;
    }

}
