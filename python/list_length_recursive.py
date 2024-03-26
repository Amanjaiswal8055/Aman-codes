def list_length_recursive(lst):
    # Base case: If the list is empty, its length is 0
    if not lst:
        return 0
    # Recursive case: Remove the first element of the list and recursively calculate the length of the remaining list
    return 1 + list_length_recursive(lst[1:])

# Example usage:
my_list = [1, 2, 3, 4, 5]
print("Length of the list:", list_length_recursive(my_list))