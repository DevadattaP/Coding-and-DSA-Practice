import unittest
from src.Program_5 import concatenate_array_twice
from utils.test_utils import print_test_case


class TestProgram5(unittest.TestCase):

    def test_rearrange_array(self):
        test_cases = [
            (1, [1, 2, 1], [1, 2, 1, 1, 2, 1]),
            (2, [1, 3, 2, 1], [1, 3, 2, 1, 1, 3, 2, 1])
        ]

        for num, input_array, expected_output in test_cases:
            actual_output = concatenate_array_twice(input_array)
            print_test_case(num, input_array, expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
