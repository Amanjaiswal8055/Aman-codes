# Define a list of numbers
numbers = [23, 45, 67, 12, 89, 34]

# Initialize max_number with the first element of the list
max_number = numbers[0]

# Iterate through the list to find the maximum number
for num in numbers:
    if num > max_number:
        max_number = num

# Print the maximum number
print("The maximum number in the list is:", max_number)
