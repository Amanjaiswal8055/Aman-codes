public class TryCatchFinallyExample {
    public static void main(String[] args) {
        try {
            // Code that might throw an exception
            int result = divide(10, 0);
            System.out.println("Result: " + result); // This line won't be executed if an exception occurs
        } catch (ArithmeticException e) {
            // Catching specific type of exception
            System.out.println("Error: Division by zero!");
        } finally {
            // Code that will always execute regardless of whether an exception occurred or
            // not
            System.out.println("Inside finally block");
            System.out.println("This block will always execute");
        }
    }

    public static int divide(int numerator, int denominator) {
        return numerator / denominator;
    }
}