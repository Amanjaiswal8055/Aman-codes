abstract class con {
    public int id;
    public String name;

    abstract void aman();
}

class nama extends con {
    void aman() {
        System.out.println("This is my name");
    }

}

public class Abstraction1 {
    public static void main(String[] args) {

        nama obj = new nama();
        obj.id = 1;
        obj.name = "Aman";
        System.out.println(obj.id);
        System.out.println(obj.name);
        obj.aman();
    }
}
