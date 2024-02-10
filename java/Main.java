public class Main {
    int x = 55;

    public void speed(int s) {
        System.out.println("Max speed is " + s);
    }

    static String name(String fName, String lName) {
        String firstName = fName;
        String lastName = lName;

        return firstName + " " + lastName;
    }

    public static void main(String[] args) {
        Main a = new Main();
        name("Aman", "Jaiswal");
        System.out.println(a.x);
        System.out.println(name("Aman", "Jaiswal"));
    }
}