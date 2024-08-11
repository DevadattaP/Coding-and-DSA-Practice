package com.example.tests;

import com.example.programs.Program_6;
import com.example.utils.TestUtils;
import org.junit.Test;
import static org.junit.Assert.*;

public class Test_Program_6 {
    @Test
    public void testMaxPathSum() {
        // Define test cases
        Object[][] testCases = {
                {1, new int[]{2, 3, 7, 10, 12}, new int[]{1, 5, 7, 8}, 35},
                {2, new int[]{10, 12}, new int[]{5, 7, 9}, 22},
                {3, new int[]{2, 3, 7, 10, 12, 15, 30, 34}, new int[]{1, 5, 7, 8, 10, 15, 16, 19}, 122}
        };

        for (Object[] testCase : testCases) {
            int num = (int) testCase[0];
            int[] arr1 = (int[]) testCase[1];
            int[] arr2 = (int[]) testCase[2];
            int expectedOutput = (int) testCase[3];
            int actualOutput = Program_6.maxPathSum(arr1,arr2);

            // Print test case results
            TestUtils.printTestCase(num, new int[][]{arr1,arr2}, expectedOutput, actualOutput);

            // Assert the result
            assertEquals(expectedOutput, actualOutput);
        }
    }
}
