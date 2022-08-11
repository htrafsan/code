/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inheritamceabcd;

/**
 *
 * @author CopotronicRifat
 */
class A
{
    A()
    {
        System.out.println("A");
    }
    void add()
    {
        int a = 10;
        int b = 20;
        System.out.println(a+b);
    }
}
class B extends A
{
    B()
    {
        System.out.println("B");
    }
    void add(int a, int b, int c)
    {
        System.out.println(a+b+c);
    }
}
class C extends A
{
    C()
    {
        System.out.println("C");
    }
    void add(int a, int b, int c, int d)
    {
        System.out.println(a+b+c+d);
    }
}
class D extends C
{
    D()
    {
        System.out.println("D");
    }
    void add()
    {
        int a = 3;
        int b = 5;
        System.out.println(a+b);
    }
}
public class InheritamceABCD {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        D objd = new D();
        objd.add();
        A obja = new A();
        obja.add();
        
    }
    
}
