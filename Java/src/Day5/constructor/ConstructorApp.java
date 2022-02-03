package Day5.constructor;

public class ConstructorApp {
    public static void main(String[] args) {
        // object
        Animal buzo = new Animal("Buzo", 10);// for Dog
        Animal cat = new Animal("Cat", 8);// for Cat
        System.out.println(buzo.getName() + ", " + buzo.getAge());
        System.out.println(cat.getName() + ", " + cat.getAge());
    }
}

class Animal {
    // instance variables
    private String name;
    private int age;

    Animal(String n, int a) {
        this.name = n;
        this.age = a;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}