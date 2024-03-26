# Define two lists
list1 = [1, 2, 3, 4, 5]
list2 = [4, 5, 6, 7, 8]

# To find the intersection of two lists, we can convert them into sets
# and then use the intersection operator '&' to find common elements.
intersection = list(set(list1) & set(list2))

# Print the intersection of the two lists
print("Intersection of two lists:", intersection)
