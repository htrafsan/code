/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package a;

/**
 *
 * @author CopotronicRifat
 */
class B{
    public void print_b()
    {
        System.out.println("b");
    }
}

class C extends B
{
    public void print_c()
    {
        System.out.println("c");
    }
}


public class A {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        C objc = new C();
        objc.print_b();
        objc.print_c();
        
    }
    
}
