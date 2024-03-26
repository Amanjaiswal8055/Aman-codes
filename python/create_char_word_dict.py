def create_char_word_dict(sentence):
    # Split the sentence into words
    words = sentence.split()

    # Create an empty dictionary to store words for each first character
    char_word_dict = {}

    # Iterate through each word in the list
    for word in words:
        # Get the first character of the word
        first_char = word[0]

        # Check if the first character is already a key in the dictionary
        if first_char in char_word_dict:
            # If it is, append the word to the list of words for that character
            char_word_dict[first_char].append(word)
        else:
            # If not, create a new key-value pair with the first character as the key
            # and a list containing the word as the value
            char_word_dict[first_char] = [word]

    return char_word_dict

# Example usage:
sentence = "the quick brown fox jumps over the lazy dog"
result_dict = create_char_word_dict(sentence)
print("Dictionary with words grouped by first character:", result_dict)
