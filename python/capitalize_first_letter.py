def capitalize_first_letter(sentence):
    # Split the sentence into words
    words = sentence.split()

    # Capitalize the first letter of each word and join them back into a sentence
    capitalized_words = [word.capitalize() for word in words]
    capitalized_sentence = ' '.join(capitalized_words)

    return capitalized_sentence

def capitalize_file_content(input_file, output_file):
    # Open the input file in read mode
    with open(input_file, 'r') as file:
        # Read the content of the file
        content = file.read()

    # Capitalize the first letter of every word in the content
    modified_content = capitalize_first_letter(content)

    # Open the output file in write mode and write the modified content
    with open(output_file, 'w') as file:
        file.write(modified_content)

# Example usage:
input_file = 'input.txt'
output_file = 'output.txt'

capitalize_file_content(input_file, output_file)
print("File content capitalized and saved to", output_file)