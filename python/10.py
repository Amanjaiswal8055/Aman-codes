def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True

def find_first_n_primes(n):
    prime_numbers = []
    num = 2
    while len(prime_numbers) < n:
        if is_prime(num):
            prime_numbers.append(num)
        num += 1
    return prime_numbers

# Example usage:
n = int(input("Enter the value of n: "))
if n <= 0:
    print("Invalid input. Please enter a positive integer.")
else:
    prime_list = find_first_n_primes(n)
    print("The first", n, "prime numbers are:", prime_list)