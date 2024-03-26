def remove_nth_occurrence(word_list, word, n):
    count = 0
    for index, item in enumerate(word_list):
        if item == word:
            count += 1
            if count == n:
                del word_list[index]
                break

# Example usage:
word_list = ["apple", "banana", "apple", "cherry", "apple"]
word_to_remove = "apple"
occurrence_to_remove = 2

remove_nth_occurrence(word_list, word_to_remove, occurrence_to_remove)
print("List after removing the", occurrence_to_remove, "th occurrence of", word_to_remove + ":", word_list)