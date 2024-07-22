package com.example.tests;

import com.example.programs.Program_2;
import com.example.utils.TestUtils;
import static org.junit.Assert.assertEquals;
import org.junit.Test;

public class Test_Program_2 {
    @Test
    public void testFindMaxDiff() {
        // Define test cases using a 2D array
        Object[][] testCases = {
                {1, new int[]{34, 8, 10, 3, 2, 80, 30, 33, 1}, 6},
                {2, new int[]{9, 2, 3, 4, 5, 6, 7, 8, 18, 0}, 8},
                {3, new int[]{1, 2, 3, 4, 5, 6}, 5},
                {4, new int[]{6, 5, 4, 3, 2, 1}, 0}
        };

        for (Object[] testCase : testCases) {
            int num = (int) testCase[0];
            int[] input = (int[]) testCase[1];
            int expectedOutput = (int) testCase[2];
            int actualOutput = Program_2.findMaxDiff(input);

            // Print test case results
            TestUtils.printTestCase(num, input, expectedOutput, actualOutput);

            // Assert the result
            assertEquals(expectedOutput, actualOutput);
        }
    }
}
