package com.example.tests;

import com.example.programs.Program_4;
import com.example.utils.TestUtils;
import org.junit.Test;
import static org.junit.Assert.*;

public class Test_Program_4 {
    @Test
    public void testFindMissingNumber() {
        // Define test cases
        Object[][] testCases = {
                {1, new int[]{1, 2, 4, 6, 3, 7, 8}, 5},
                {2, new int[]{1, 2, 3, 5}, 4},
        };

        for (Object[] testCase : testCases) {
            int num = (int)testCase[0];
            int[] input = (int[]) testCase[1];
            int expectedOutput = (int) testCase[2];
            int actualOutput = Program_4.findMissingNumber(input);
            // Print test case results
            TestUtils.printTestCase(num, input, expectedOutput, actualOutput);
            // Assert the result
            assertEquals(expectedOutput, actualOutput);
        }
    }
}
