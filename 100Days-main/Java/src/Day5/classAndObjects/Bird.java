package Day5.classAndObjects;

public class Bird {
    // variable / fields
    String color;
    int age;
    String name;

    void iniObj(String n) {
        name = n;
    }

    // main
    public static void main(String[] args) {
        Bird sp = new Bird();
        // object initiazation by referance variable
        sp.color = "Brown";
        sp.age = 6;
        // by method object initiazation
        sp.iniObj("Finch");

        System.out.println(sp.name + " is " + sp.color + " and " + sp.age + " months old.");
    }
}
