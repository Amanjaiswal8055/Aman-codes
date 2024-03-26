def square_root(n):
    # Initial guess for the square root
    guess = n / 2.0

    # Iterate until convergence
    while True:
        new_guess = (guess + n / guess) / 2.0
        if abs(new_guess - guess) < 0.0001:  # Adjust the tolerance level as needed
            break
        guess = new_guess

    return new_guess

# Taking input from the user
number = float(input("Enter a number: "))

# Finding the square root using Newton's method
sqrt = square_root(number)

# Printing the result
print("The square root of", number, "is approximately", sqrt)
