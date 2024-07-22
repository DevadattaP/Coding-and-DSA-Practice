import unittest
from src.Program_1 import check_even_odd
from utils.test_utils import print_test_case


class TestProgram1(unittest.TestCase):

    def test_check_even_odd(self):
        test_cases = [
            (1, 0, "Even"),
            (2, 1, "Odd"),
            (3, 20, "Even"),
            (4, 315, "Odd"),
            (5, -1230, "Even"),
            (6, -67, "Odd")
        ]

        for num, input_value, expected_output in test_cases:
            actual_output = check_even_odd(input_value)
            print_test_case(num, input_value, expected_output, actual_output)
            self.assertEqual(actual_output, expected_output)


if __name__ == "__main__":
    unittest.main()
