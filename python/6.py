def binary_search(arr, target):
    """
    Perform binary search to find the index of the target element in the array.
    If the target is not found, return -1.
    """
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1  # Target not found

# Example usage:
arr = [12, 23, 34, 45, 67, 89]
target = 67

# Perform binary search
index = binary_search(arr, target)

if index != -1:
    print(f"Target {target} found at index {index}.")
else:
    print(f"Target {target} not found in the array.")

print((10+2)/5)