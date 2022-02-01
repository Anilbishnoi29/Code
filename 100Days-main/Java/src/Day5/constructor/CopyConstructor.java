package Day5.constructor;

public class CopyConstructor {
    public static void main(String[] args) {
        Employee em1 = new Employee("Rohit", 45000);
        Employee em2 = new Employee("Pawan", 37000);
        System.out.println(em1.getName() + ", " + em1.getSalary());
        System.out.println(em2.getName() + ", " + em2.getSalary());
        // copy Constructor
        Employee em3 = new Employee(em1);
        System.out.println(em3.getName() + ", " + em3.getSalary());
    }
}

class Employee {
    // instance variables
    private String name;
    private int salary;

    // constructor
    Employee(String n, int s) {
        this.name = n;
        this.salary = s;
    }

    // get name and salary method
    public String getName() {
        return name;
    }

    public int getSalary() {
        return salary;
    }

    // copy constructor
    public Employee(Employee em) {
        name = em.name;
        salary = em.salary + 10000;
    }
}