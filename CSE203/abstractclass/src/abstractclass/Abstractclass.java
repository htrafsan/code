/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package abstractclass;

/**
 *
 * @author CopotronicRifat
 */

abstract class vehicle
{
    public void print()
    {
        System.out.println("Vehicle");
    }
    //public abstract void abstractmethod();
}
class bus extends vehicle
{
    public void printbus()
    {
        System.out.println("Bus");
    }
}

class motorcycle extends vehicle
{
    public void printmotorcycle()
    {
        System.out.println("Motorcycle");
    }
}


class cycle extends motorcycle
{
    public void cycle()
    {
        System.out.println("Cycle");
    }
}
public class Abstractclass {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //vehicle obj = new vehicle();
        motorcycle obj = new motorcycle();
        obj.print();
        
        bus objb = new bus();
        objb.print();
        
        cycle objc = new cycle();
        objc.print();
    }
    
}
