/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package encapsulation;

/**
 *
 * @author CopotronicRifat
 */
class A
{
    private int a = 10;
    public int x = 5;
    
    private void print()
    {
        System.out.println("This cannot be accessed!");
    }
    
    public void prints()
    {
        System.out.println("This can be accessed!");
    }
}


public class Encapsulation {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        A obj = new A();
        System.out.println(obj.x);
        obj.prints();
        //System.out.println(obj.print);
    }
    
}
