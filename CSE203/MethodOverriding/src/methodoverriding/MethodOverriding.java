/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package methodoverriding;

/**
 *
 * @author CopotronicRifat
 */
class A
    {
        void sum(int a, int b)
        {
            System.out.println("A");
            System.out.println(a+b);
        }
    }
    
    class B extends A
    {
        void sum(int a, int b)
        {
            System.out.println("B");
            System.out.println(a+b);
        }
    }
public class MethodOverriding {

    /**
     * @param args the command line arguments
     */

    public static void main(String[] args) {
        B objb = new B();
        objb.sum(5,6);
        
    }
    
}
