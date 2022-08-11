/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hierarchical;

/**
 *
 * @author CopotronicRifat
 */
class A
{
    public void print_a()
    {
        System.out.println("a");
    }
}
class B extends A
{
    public void print_b()
    {
        System.out.println("b");
    }
}
class C extends A
{
    public void print_c()
    {
        System.out.println("c");
    }
}
class D extends A
{
    public void print_d()
    {
        System.out.println("d");
    }
}
public class Hierarchical {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        D objd = new D();
        objd.print_a();
        C objc = new C();
        objc.print_a();
        B objb = new B();
        objb.print_a();
    }
    
}
