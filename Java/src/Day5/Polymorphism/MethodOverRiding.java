package Day5.Polymorphism;

public class MethodOverRiding extends Test {
    @Override
    public void show() {
        super.show();
        System.out.println("main class method");
    }

    public static void main(String[] args) {
        MethodOverRiding mr = new MethodOverRiding();
        mr.show();
    }
}

class Test {
    public void show() {
        System.out.println("test method");
    }
}