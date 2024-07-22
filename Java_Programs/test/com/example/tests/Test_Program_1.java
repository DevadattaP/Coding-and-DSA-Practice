package com.example.tests;

import com.example.programs.Program_1;
import com.example.utils.TestUtils;
import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class Test_Program_1 {

    @Test
    public void testCheckEvenOdd() {
        // Test Cases
        Object[][] testCases = {
                {1, 0, "Even"},
                {2, 1, "Odd"},
                {3, 20, "Even"},
                {4, 315, "Odd"},
                {5, -1230, "Even"},
                {6, -67, "Odd"}
        };

        for (Object[] testCase : testCases) {
            int num = (int) testCase[0];
            int input = (int) testCase[1];
            String expectedOutput = (String) testCase[2];
            String actualOutput = Program_1.checkEvenOdd(input);

            // Print test case results
            TestUtils.printTestCase(num, Integer.toString(input), expectedOutput, actualOutput);

            // Assert the result
            assertEquals(expectedOutput, actualOutput);
        }
    }
}
