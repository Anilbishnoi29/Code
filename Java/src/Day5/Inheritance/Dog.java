package Day5.Inheritance;

public class Dog extends Animal {

    public static void main(String[] args) {
        Dog buzo = new Dog();
        buzo.eat("Buzo");
    };
}

class Animal extends SuperAnimal {

    public void eat(String name) {
        System.out.println(name + " is eating.");
        System.out.println("From Animal class");
    }
}

class SuperAnimal {

    public void eat(String name) {
        System.out.println(name + " is eating.");
        System.out.println("From SuperAnimal class");
    }
}