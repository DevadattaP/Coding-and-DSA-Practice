def find_max_diff(arr):
    max_diff = 0
    for i in range(len(arr)):
        for j in range(len(arr) - 1, i, -1):
            if arr[j] > arr[i] and max_diff < (j - i):
                max_diff = j - i
    return max_diff