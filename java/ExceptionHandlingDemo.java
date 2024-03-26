import java.util.Scanner;

public class ExceptionHandlingDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            System.out.print("Enter age: ");
            int age = scanner.nextInt();
            validateAge(age);
            System.out.println("Age is valid.");
        } catch (AgeException e) {
            System.out.println("AgeException caught: " + e.getMessage());
        } finally {
            // Finally block to close resources
            scanner.close();
            System.out.println("Scanner closed.");
        }
    }

    // Method to validate age
    public static void validateAge(int age) throws AgeException {
        if (age < 0 || age > 120) {
            throw new AgeException("Age must be between 0 and 120.");
        }
    }
}

// Custom exception class
class AgeException extends Exception {
    public AgeException(String message) {
        super(message);
    }
}
