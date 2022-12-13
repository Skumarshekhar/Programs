class Human1 {
String gender;
String color;
int age;
int weight;
int height;
public String getinfo(){
    return("Gender is"+gender+"Color is"+color+"Age is"+age+"weight is"+weight+"Height is"+height);
}
}
class Human{
    public static void main(String[] args) {
        Human1 h1=new Human1();
        h1.gender="Male";
        h1.color="Black";
        h1.age=12;
        h1.weight=170;
        h1.height=800;
        System.out.println(h1.getinfo());
    }

    
}
    