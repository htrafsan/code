/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inheritencecons;

/**
 *
 * @author CopotronicRifat
 */
class A{

    /**
     * @param args the command line arguments
     */
    A()
    {
        System.out.println("A Constructor");
    }
    void print()
    {
        System.out.println("A");
    }
}
    class B extends A
    {
        B()
        {
            System.out.println("B Constructor");
        }
        void print()
    {
        System.out.println("B");
    }
        void add()
        {
            int a = 8;
            int b = 7;
            System.out.println(a+b);
        }
    }
class C extends B
    {
       C()
        {
            System.out.println("C Constructor");
        }
       void print()
    {
        System.out.println("C");
    }
       void add()
        {
            int a = 4;
            int b = 3;
            System.out.println(a+b);
        }
    }
public class InheritenceCons {
    public static void main(String[] args) {
        C cobj = new C();
        B bobj = new C();
        //cobj.print();
        bobj.add();
        //ref = cobj;
        //ref.B();
        
        
    }
    
}
