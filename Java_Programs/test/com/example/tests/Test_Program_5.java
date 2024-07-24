package com.example.tests;

import com.example.programs.Program_5;
import com.example.utils.TestUtils;
import org.junit.Test;
import static org.junit.Assert.*;

public class Test_Program_5 {
    @Test
    public void testConcatenateArrayTwice() {
        // Define test cases
        Object[][] testCases = {
                {1, new int[]{1, 2, 1}, new int[]{1, 2, 1, 1, 2, 1}},
                {2, new int[]{1, 3, 2, 1}, new int[]{1, 3, 2, 1, 1, 3, 2, 1}}
        };

        for (Object[] testCase : testCases) {
            int num = (int) testCase[0];
            int[] input = (int[]) testCase[1];
            int[] expectedOutput = (int[]) testCase[2];
            int[] actualOutput = Program_5.concatenateArrayTwice(input);

            // Print test case results
            TestUtils.printTestCase(num, input, expectedOutput, actualOutput);

            // Assert the result
            assertArrayEquals(expectedOutput, actualOutput);
        }
    }
}
