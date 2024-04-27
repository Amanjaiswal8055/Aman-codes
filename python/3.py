def power(base, exponent):
    result = 1

    # Multiply base by itself 'exponent' times
    for _ in range(exponent):
        result *= base

    return result

# Taking input from the user
base = float(input("Enter the base number: "))
exponent = int(input("Enter the exponent: "))

# Calculating the exponentiation
result = power(base, exponent)

# Printing the result
print(f"{base} raised to the power of ",exponent," is: {result}")
