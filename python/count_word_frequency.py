def count_word_frequency(sentence):
    # Split the sentence into words
    words = sentence.split()

    # Create an empty dictionary to store word counts
    word_counts = {}

    # Iterate through each word in the list
    for word in words:
        # Increment the count for the current word in the dictionary
        word_counts[word] = word_counts.get(word, 0) + 1

    return word_counts

# Example usage:
sentence = "the quick brown fox jumps over the lazy dog"
word_frequency = count_word_frequency(sentence)
print("Word frequency:", word_frequency)