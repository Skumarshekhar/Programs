public class Constructor2 {
    String name;
    String Schoolname;
    String clas;
    String city;
    int roll;
    Constructor2(String n, String sn, String cl, String c, int r){
        name=n;
        Schoolname=sn;
        clas=cl;
        city=c;
        roll=r;
    }
    void show(){
        System.out.println("Name = "+name+" School Name = "+Schoolname+" Class = "+clas+" City = "+city+" Roll no. = "+roll);
    }
    public static void main(String[] args) {
        Constructor2 c1=new Constructor2("Ram", "SVN", "Seven", "Konch", 42);
        c1.show();
    }
}
