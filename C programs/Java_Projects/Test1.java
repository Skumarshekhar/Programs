class InheritanceBike{
    void bikename(){
        System.out.println("Bike name is Pulsar");
    }        
    void gear(){
        System.out.println("You can change gear upto 10");
    }
    void tyre(){
        System.out.println("Tyre color is black");
    }
    void fueltype(){
        System.out.println("petrol");
    }
}
    class superbike extends InheritanceBike{
        void gps(){
            System.out.println("GPS is enabled");
        }
        void camera(){
            System.out.println("Camera is available");
        }
    }
    class Test1{

    public static void main(String[] args) {
        superbike sb =new superbike();
        sb.bikename();
        sb.camera();
        sb.fueltype();
        sb.gear();
        sb.gps();
        sb.tyre();
    }
    
    }