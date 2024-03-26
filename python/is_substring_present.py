def is_substring_present(main_string, substring):
    # Check if the substring is present in the main string
    if substring in main_string:
        return True
    else:
        return False

# Example usage:
main_string = "hello world"
substring = "world"

if is_substring_present(main_string, substring):
    print("Substring is present in the main string.")
else:
    print("Substring is not present in the main string.")