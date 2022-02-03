package Day4;

public class Day4 {
    public static void main(String[] args) {
        int i = 0;
        while (i < 10) {
            for (int j = 0; j <= (2 * i); j++) {
                System.out.print("*");
            }
            System.out.println();
            i++;
        }
        while (i > 0) {
            for (int j = 0; j <= (2 * i); j++) {
                System.out.print("*");
            }
            System.out.println();
            i--;
        }
    }
}