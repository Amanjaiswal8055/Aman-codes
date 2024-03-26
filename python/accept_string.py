class StringManager:
    def __init__(self):
        self.user_string = ""

    def accept_string(self):
        self.user_string = input("Enter a string: ")

    def print_string(self):
        print("Entered string:", self.user_string)

# Example usage:
string_manager = StringManager()
string_manager.accept_string()
string_manager.print_string()
