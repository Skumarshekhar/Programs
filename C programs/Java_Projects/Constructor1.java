public class Constructor1 {
    String name;
    String clas;
    String city;
    int roll;
    Constructor1(String n, String cl, String c, int r){
        name=n;
        clas=cl;
        city=c;        
        roll=r;
    }
    void display(){
        System.out.println("name-- " +name+" Class-- "+clas+" City-- "+city+" Roll-- "+roll);
    }
    public static void main(String[] args) {
        Constructor1 c1=new Constructor1("Abc", "Eight", "Konch", 12);
        Constructor1 c2=new Constructor1("Def", "Ten", "Konch", 14);
        c1.display();
        c2.display();
    }

}