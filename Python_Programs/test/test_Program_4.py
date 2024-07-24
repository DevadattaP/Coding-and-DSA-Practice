import unittest
from src.Program_4 import find_missing_number
from utils.test_utils import print_test_case


class TestProgram4(unittest.TestCase):

    def test_rearrange_array(self):
        test_cases = [
            (1, [1, 2, 4, 6, 3, 7, 8], 5),
            (2, [1, 2, 3, 5], 4)
        ]

        for num, input_array, expected_output in test_cases:
            actual_output = find_missing_number(input_array)
            print_test_case(num, input_array, expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
