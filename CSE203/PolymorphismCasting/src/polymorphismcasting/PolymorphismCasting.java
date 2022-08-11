/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package polymorphismcasting;

/**
 *
 * @author CopotronicRifat
 */
class A
{
    int numA;
    void methodA()
    {
        System.out.println("A");
    }
}

class B extends A
{
    int numB;
    void methodB()
    {
        System.out.println("B");
    }
}

public class PolymorphismCasting {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        A obja = new B(); //upcasting
        obja.numA = 10;
        
        System.out.println(obja.numA);
        
        B objb = (B)obja; //downcasting
        objb.numB = 7;
        System.out.println(objb.numA);
        System.out.println(objb.numB);
        objb.methodA();
        objb.methodB();
        
        
        
    }
    
}
