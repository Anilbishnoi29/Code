package Day5;

public class Player1 {
    private String name;
    private String weapon;
    private int health;

    public Player1(String name, String weapon, int health) {
        this.name = name;
        this.weapon = weapon;
        if (health < 0 || health > 100) {
            this.health = 100;
        } else {
            this.health = health;
        }
    }

    public void damageByGun1() {
        this.health -= 30;
        if (this.health <= 0) {
            this.health = 0;
        }
        System.out.println("Got hit by gun 1. Health is reduced by 30. New Health is " + this.health);
        if (this.health == 0) {
            System.out.println(getName() + " is dead...");
        }
    }

    public void damageByGun2() {
        this.health -= 50;
        if (this.health <= 0) {
            this.health = 0;
        }
        System.out.println("Got hit by gun 2. Health is reduced by 30. New Health is " + this.health);
        if (this.health == 0) {
            System.out.println(getName() + " is dead...");
        }
    }

    public String getName() {
        return this.name;
    }

    public int getHealth() {
        return this.health;
    }

    public String getWeapon() {
        return this.weapon;
    }
}
