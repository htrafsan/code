/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package polymorphism;

/**
 *
 * @author CopotronicRifat
 */

class vehicle
{
    public vehicle()
    {
        System.out.println("Vehicle from constructor");
    }
    public void print()
    {
        System.out.println("Vehicle");
    }
}

class bus extends vehicle
{
    public void print()
    {
        System.out.println("Bus");
    }
}

class motorcycle extends vehicle
{
    public void print()
    {
        System.out.println("Motorcycle");
    }
}

class car extends vehicle
{
    public car()
    {
        System.out.println("Car from constructor");
    }
    public void print()
    {
        System.out.println("Car");
    }
}

class privatecar extends car
{
    public void print()
    {
        System.out.println("Car");
    }
}

public class Polymorphism {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        vehicle objv = new vehicle();
        bus objb = new bus();
        motorcycle objm = new motorcycle();
        car objc = new car();
        privatecar objp = new privatecar();
        
        objv.print();
        objb.print();
        objm.print();
        //objc.print();
    }
    
}
