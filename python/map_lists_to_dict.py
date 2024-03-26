def map_lists_to_dict(keys, values):
    # Zip the two lists together to create pairs of (key, value)
    # Then convert the pairs into a dictionary
    mapped_dict = dict(zip(keys, values))
    return mapped_dict

# Example usage:
keys = ['a', 'b', 'c']
values = [1, 2, 3]

result_dict = map_lists_to_dict(keys, values)
print("Mapped dictionary:", result_dict)