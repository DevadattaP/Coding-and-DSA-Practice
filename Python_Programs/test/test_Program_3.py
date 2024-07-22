import unittest
from src.Program_3 import rearrange_array
from utils.test_utils import print_test_case


class TestProgram3(unittest.TestCase):

    def test_rearrange_array(self):
        test_cases = [
            (1, [1, 2, 3, -4, -1, 4], [-4, 1, -1, 2, 3, 4]),
            (2, [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8], [-5, 5, -2, 2, -8, 4, 7, 1, 8, 0])
        ]

        for num, input_array, expected_output in test_cases:
            actual_output = rearrange_array(input_array)
            print_test_case(num, input_array, expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
