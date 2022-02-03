package Day5.classAndObjects;

public class App {
    public void appMethod() {
        System.out.println("App class method");
    }

    public static void main(String[] args) {
        // Animal class obj
        Animal buzo = new Animal();
        buzo.eat("Buzo", "biscuit");

        // App class obj
        App a = new App();
        a.appMethod();
    }
}

// class
class Animal {
    // state/attribute

    // method/behaver
    public void eat(String name, String item) {
        System.out.println(name + " eat " + item + ".");
    };

}