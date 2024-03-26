def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

# Taking input from the user
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

# Calculating the GCD
result = gcd(num1, num2)

# Printing the result
print("The GCD of", num1, "and", num2, "is", result)