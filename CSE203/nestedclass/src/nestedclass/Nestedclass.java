/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nestedclass;

/**
 *
 * @author CopotronicRifat
 */

class A
{
    public int numberA = 7;
    
    public void print()
    {
        System.out.println("A");
    }
    
    class B
    {
        public int numberB = 3;
        public void print()
        {
            System.out.println("B");
        }
    }
}


public class Nestedclass {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        A obja = new A();
        A.B objb = obja.new B();
        
        obja.print();
        objb.print();
        
        int sum = obja.numberA + objb.numberB;
        System.out.println(sum);
        
    }
    
}
