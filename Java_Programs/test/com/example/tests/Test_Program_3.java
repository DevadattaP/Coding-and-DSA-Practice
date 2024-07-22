package com.example.tests;

import com.example.programs.Program_3;
import com.example.utils.TestUtils;
import org.junit.Test;
import static org.junit.Assert.*;

public class Test_Program_3 {

    @Test
    public void testRearrangeArray() {
        // Define test cases
        Object[][] testCases = {
                {1, new int[]{1, 2, 3, -4, -1, 4}, new int[]{-4, 1, -1, 2, 3, 4}},
                {2, new int[]{-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}, new int[]{-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}}
        };

        for (Object[] testCase : testCases) {
            int num = (int) testCase[0];
            int[] input = (int[]) testCase[1];
            int[] expectedOutput = (int[]) testCase[2];
            int[] actualOutput = Program_3.rearrangeArray(input);

            // Print test case results
            TestUtils.printTestCase(num, input, expectedOutput, actualOutput);

            // Assert the result
            assertArrayEquals(expectedOutput, actualOutput);
        }
    }
}