/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hybrid;

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
class D extends C
{
    public void print_d()
    {
        System.out.println("d");
    }
}
class E extends D
{
    public void print_e()
    {
        System.out.println("e");
    }
}
class F extends D
{
    public void print_f()
    {
        System.out.println("f");
    }
}
public class Hybrid {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        F objf = new F();
        objf.print_c();
    }
    
}
