def concatenate_array_twice(arr):
    return arr * 2

"""
def concatenate_array_twice(arr):
    # Create a new list with double the size
    new_size = len(arr) * 2
    new_arr = [0] * new_size

    # Copy elements of the original list into the new list twice
    for i in range(len(arr)):
        new_arr[i] = arr[i]
        new_arr[i + len(arr)] = arr[i]

    return new_arr
"""
