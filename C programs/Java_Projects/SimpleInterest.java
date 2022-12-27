import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        int principal, rate, time,si;
        System.out.println("Enter the principal rate and time");
        Scanner s=new Scanner(System.in);
        principal=s.nextInt();
        rate=s.nextInt();
        time=s.nextInt();
        si=(principal*rate*time)/100;
        System.out.println("Simple Interest is = "+si);
    }
}
