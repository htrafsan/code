/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inheritanceconstructor;

/**
 *
 * @author CopotronicRifat
 */
class A
{
    A()
    {
        System.out.println("Constructor  of Class A");
    }
}
class B extends A
{
    B()
    {
        System.out.println("Constructor  of Class B");
    }
}
class C extends B
{
    C()
    {
        System.out.println("Constructor  of Class C");
    }
}
public class InheritanceConstructor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        B objb = new B();
        
    }
    
}
