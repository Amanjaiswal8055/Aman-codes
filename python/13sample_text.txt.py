from collections import Counter
import re

def find_most_frequent_words(filename, num_words):
    try:
        # Open the file and read its contents
        with open(filename, 'r') as file:
            text = file.read()

        # Split the text into words using regular expressions
        words = re.findall(r'\b\w+\b', text.lower())

        # Count the frequency of each word
        word_counts = Counter(words)

        # Find the most common words
        most_common_words = word_counts.most_common(num_words)

        return most_common_words
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
        return []

# Example usage:
filename = 'sample_text.txt'  # Replace 'sample_text.txt' with the name of your file
num_words = 5

# Find the most frequent words
most_frequent_words = find_most_frequent_words(filename, num_words)

# Print the most frequent words
if most_frequent_words:
    print(f"The {num_words} most frequent words in the file '{filename}' are:")
    for word, frequency in most_frequent_words:
        print(f"{word}: {frequency}")
else:
    print("No most frequent words found.")
