package Day5.Polymorphism;

public class MethodOverLoading {
    public void show() {
        System.out.println("No Argument method");
    }

    public void show(int a) {
        System.out.println("1 Argument method");
    }

    public void show(int a, int b) {
        System.out.println("2 Argument method");
    }

    public void show(String a, int b) {
        System.out.println("String int Argument method");
    }

    public static void main(String[] args) {
        MethodOverLoading ml = new MethodOverLoading();
        ml.show();
        ml.show(3);
        ml.show(2, 3);
        ml.show('a', 'a');

    }
}
