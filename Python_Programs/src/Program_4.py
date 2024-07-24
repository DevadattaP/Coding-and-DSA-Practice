def find_missing_number(arr):
    # Calculate the sum of the first N natural numbers
    n = len(arr) + 1
    total_sum = n * (n + 1) // 2

    # Calculate the sum of elements in the given array
    array_sum = sum(arr)

    # The missing number is the difference between the expected sum and the actual sum
    return total_sum - array_sum
