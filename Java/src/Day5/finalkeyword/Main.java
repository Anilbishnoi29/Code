package Day5.finalkeyword;

public class Main extends Test {
    public static void main(String[] args) {
        // where we use final keyword => Variables, methods, and class
        /*
         * 1. when we want constant a variable value than we make it "final Variable";
         * which value is constant (we can't reassign variables value)
         */

        final int i = 10;
        System.out.println(i);

    }
}

class Test {
    /*
     * 2. when we want to the the method can't override than we make it
     * "final method"
     */
    final public void tStart() {
        System.out.println("sStart() method...");
    }
}

/*
 * 3. when we want the class can't be inherit(extends) than we make it
 * "final class"
 */
final class DemoTest {

}