def linear_search(arr, target):
    """
    Perform linear search to find the index of the target element in the array.
    If the target is not found, return -1.
    """
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1  # Target not found

# Example usage:
arr = [12, 45, 23, 67, 34, 89]
target = 67

# Perform linear search
index = linear_search(arr, target)

if index != -1:
    print(f"Target {target} found at index {index}.")
else:
    print(f"Target {target} not found in the array.")
