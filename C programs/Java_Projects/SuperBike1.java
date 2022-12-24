import java.util.*;         //This program needs few changes means not perfectly completed
public class SuperBike1 {
    String f;
    String t;
    int g, e, a;
    Scanner sc= new Scanner(System.in);
    void insert(){
        System.out.println("Enter details of bike fuel and tyre");
        f=sc.nextLine();
        t=sc.nextLine();
        System.out.println("Enter details like engine gear and accelerator");
        e=sc.nextInt();
        g=sc.nextInt();
        a=sc.nextInt();
    }
    void engine_pow(){
        System.out.println("Power of engine");
    }
    void gear(){
        System.out.println("Gear present in bike");
    }
    void fuel(){
        System.out.println("Usable fuel type in bike");
    }
    void tyre(){
        System.out.println("Bike is made of");
    }
    void accelerator(){
        System.out.println("Accelerating time of bike");
    }
    class Superbike extends SuperBike1{
        String gps;
        String bullet;
        void gps(){
            System.out.println("GPS enabled");
        }
        void bullet(){
            System.out.println("Can fire ten bullets at a time");
        }
    }
}
    class SuperBike{
        public static void main(String[] args) {
            SuperBike1 b=new SuperBike1();
            b.insert();
            b.engine_pow();
            b.gear();
            b.tyre();
            b.fuel();
            b.accelerator();
            
        }
    }

