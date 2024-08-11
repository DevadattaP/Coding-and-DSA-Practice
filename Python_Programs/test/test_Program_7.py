import unittest
from src.Program_7 import find_common_elements
from utils.test_utils import print_test_case


class TestProgram7(unittest.TestCase):

    def test_max_path_sum(self):
        test_cases = [
            (1, [1, 2, 3], [2, 3, 4], [3, 4, 5], [3]),
            (2, [10, 20, 30], [20, 25, 30], [20, 30, 40], [20, 30]),
            (3, [1, 3, 5], [2, 4, 6], [7, 8, 9], [])
        ]

        for num, arr1, arr2, arr3, expected_output in test_cases:
            actual_output = find_common_elements(arr1, arr2, arr3)
            print_test_case(num, [arr1, arr2, arr3], expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
