import sys

# Check if command-line arguments are provided
if len(sys.argv) <= 1:
    print("Usage: python program_name.py argument1 argument2 ...")
else:
    # Print the total number of command-line arguments
    print("Total number of command-line arguments:", len(sys.argv) - 1)

    # Print the command-line arguments
    print("Command-line arguments:")
    for i in range(1, len(sys.argv)):
        print(f"Argument {i}: {sys.argv[i]}")