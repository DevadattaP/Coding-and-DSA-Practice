package com.example.tests;

import com.example.programs.Program_7;
import com.example.utils.TestUtils;
import org.junit.Test;

import static org.junit.Assert.assertArrayEquals;

public class Test_Program_7 {
    @Test
    public void testFindCommonElements() {
        // Define test cases
        Object[][] testCases = {
                {1, new int[]{1, 2, 3}, new int[]{2, 3, 4}, new int[]{3, 4, 5}, new int[]{3}},
                {2, new int[]{10, 20, 30}, new int[]{20, 25, 30}, new int[]{20, 30, 40}, new int[]{20,30}},
                {3, new int[]{1, 3, 5}, new int[]{2, 4, 6}, new int[]{7, 8, 9}, new int[]{}}
        };

        for (Object[] testCase : testCases) {
            int num = (int) testCase[0];
            int[] arr1 = (int[]) testCase[1];
            int[] arr2 = (int[]) testCase[2];
            int[] arr3 = (int[]) testCase[3];
            int[] expectedOutput = (int[]) testCase[4];
            int[] actualOutput = Program_7.findCommonElements(arr1,arr2, arr3);

            // Print test case results
            TestUtils.printTestCase(num, new int[][]{arr1,arr2, arr3}, expectedOutput, actualOutput);

            // Assert the result
            assertArrayEquals(expectedOutput, actualOutput);
        }
    }
}
