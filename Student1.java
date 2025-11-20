import java.util.Scanner;

class Student {
    String name;
    char section;
    String USN;
    float CGPA;

    public void inputDetails() {
        Scanner sk = new Scanner(System.in);
        System.out.print("Enter student name : ");
        name = sk.nextLine();
        System.out.print("Enter section : ");
        section = sk.next().charAt(0);
        System.out.print("Enter USN : ");
        USN = sk.next();
        System.out.print("Enter CGPA : ");
        CGPA = sk.nextFloat();
    }

    public void displayDetails() {
        System.out.println("\n--- Student Details ---");
        System.out.println("Name     : " + name);
        System.out.println("Section  : " + section);
        System.out.println("USN      : " + USN);
        System.out.println("CGPA     : " + CGPA);
    }
}

public class Student1 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.inputDetails();
        s1.displayDetails();
    }
}
