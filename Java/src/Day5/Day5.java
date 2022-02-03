package Day5;

public class Day5 {
    public static void main(String[] args) throws Exception {
        Player1 p1 = new Player1("Anil", "Sword", 100);
        Player2 p2 = new Player2("Robin", "A-47", 100, false);

        p1.damageByGun1();
        p2.damageByGun1();
        p1.damageByGun1();
        p1.damageByGun1();
        System.out.println(p1.getHealth());
    }
}
