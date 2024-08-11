import unittest
from src.Program_6 import max_path_sum
from utils.test_utils import print_test_case


class TestProgram6(unittest.TestCase):

    def test_max_path_sum(self):
        test_cases = [
            (1, [2, 3, 7, 10, 12], [1, 5, 7, 8],35),
            (2, [10, 12], [5, 7, 9],22),
            (3, [2, 3, 7, 10, 12, 15, 30, 34], [1, 5, 7, 8, 10, 15, 16, 19],122)
        ]

        for num, arr1, arr2, expected_output in test_cases:
            actual_output = max_path_sum(arr1, arr2)
            print_test_case(num, [arr1, arr2], expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
