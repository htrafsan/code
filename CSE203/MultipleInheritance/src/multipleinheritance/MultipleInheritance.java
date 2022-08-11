/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multipleinheritance;

/**
 *
 * @author CopotronicRifat
 */
class A
{
    public int a = 3;
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
class C extends B
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
public class MultipleInheritance {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        D objd = new D();
        objd.print_d();
        objd.print_c();
        objd.print_b();
        objd.print_a();
        System.out.println(objd.a);
    }
    
}
