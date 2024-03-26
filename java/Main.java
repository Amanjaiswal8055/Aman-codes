// Parent class
class Animal {
    // Instance variable
    String type;

    // Constructor
    public Animal(String type) {
        this.type = type;
    }

    // Method to display the type of animal
    public void displayType() {
        System.out.println("Type of animal: " + type);
    }
}

// Child class inheriting from Animal
class Dog extends Animal {
    // Additional instance variable
    String breed;

    // Constructor
    public Dog(String type, String breed) {
        super(type); // Call to parent class constructor using 'super'
        this.breed = breed;
    }

    // Method to display the type and breed of dog
    public void displayDetails() {
        super.displayType(); // Call to parent class method using 'super'
        System.out.println("Breed of dog: " + breed);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create object of Dog class
        Dog myDog = new Dog("Canine", "Labrador");

        // Call method to display details of dog
        myDog.displayDetails();
    }
}
