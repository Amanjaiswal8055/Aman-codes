def read_file_in_reverse(file_path):
    # Open the file in read mode
    with open(file_path, 'r') as file:
        # Read the content of the file
        content = file.readlines()

    # Reverse the list of lines
    reversed_content = reversed(content)

    # Print the content in reverse order
    for line in reversed_content:
        print(line.rstrip())

# Example usage:
file_path = 'example.txt'
read_file_in_reverse(file_path)
