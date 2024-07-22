import unittest
from src.Program_2 import find_max_diff
from utils.test_utils import print_test_case


class TestProgram2(unittest.TestCase):

    def test_find_max_diff(self):
        test_cases = [
            (1, [34, 8, 10, 3, 2, 80, 30, 33, 1], 6),
            (2, [9, 2, 3, 4, 5, 6, 7, 8, 18, 0], 8),
            (3, [1, 2, 3, 4, 5, 6], 5),
            (4, [6, 5, 4, 3, 2, 1], 0)
        ]

        for num, input_array, expected_output in test_cases:
            actual_output = find_max_diff(input_array)
            print_test_case(num, input_array, expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
