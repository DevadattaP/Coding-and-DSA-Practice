"""
def find_common_elements(arr1, arr2, arr3):
    # Convert lists to sets
    set1 = set(arr1)
    set2 = set(arr2)
    set3 = set(arr3)

    # Find common elements
    common_elements = set1.intersection(set2).intersection(set3)

    return sorted(common_elements)
"""


def find_common_elements(arr1, arr2, arr3):
    i, j, k = 0, 0, 0
    result = []

    # Iterate through all arrays to find common elements
    while i < len(arr1) and j < len(arr2) and k < len(arr3):
        if arr1[i] == arr2[j] == arr3[k]:
            result.append(arr1[i])  # Add common element
            i += 1
            j += 1
            k += 1
        elif arr1[i] < arr2[j]:
            i += 1
        elif arr2[j] < arr3[k]:
            j += 1
        else:
            k += 1

    return result
