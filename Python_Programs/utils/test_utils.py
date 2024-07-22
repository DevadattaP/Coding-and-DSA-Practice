def print_test_case(num, input_value, expected_output, actual_output):
    # ANSI escape codes for colors
    RED = '\033[91m'
    GREEN = '\033[92m'
    RESET = '\033[0m'

    print(f"\n\nTest Case {num} :")
    print(f"Input : {input_value}")
    print(f"Expected Output : {expected_output}")
    print(f"Actual Output : {actual_output}")

    if expected_output != actual_output:
        print(f"{RED}Result: Test case failed{RESET}")
    else:
        print(f"{GREEN}Result: Test case passed{RESET}")
