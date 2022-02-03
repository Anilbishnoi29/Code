package Day1;

public class Day1 {

    public static void main(String[] args) {
        System.out.println("Data types");
        int intData = 5;
        String str = "Hello";

        // print data typed=> in primitive data type
        System.out.println(intData + " is of type " + ((Object) intData).getClass().getSimpleName());

        // print data typed=> in primitive data type
        System.out.println(str + " is of type " + str.getClass().getSimpleName());
        typeCast();
    }

    public static void typeCast() {
        // implicit casting is low rang to higher rang data type
        // int to double/float/long
        // by java automatic
        // No data loss

        int i = 5;
        double d = i;
        System.out.println(d);

        // explicit casting is higher range to low rang data type
        // double to int
        // by developer him self
        // data loss possible

        double dd = 5.5;
        int ii = (int) dd;
        System.out.println(ii);
    }
}
