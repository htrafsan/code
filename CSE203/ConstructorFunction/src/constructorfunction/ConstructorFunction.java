/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package constructorfunction;

/**
 *
 * @author CopotronicRifat
 */
public class ConstructorFunction {

    /**
     * @param args the command line arguments
     */
    int num1;
    public ConstructorFunction()
    {
        num1 = 7;
    }
    public void NonConstructorFunction()
    {
        num1 = 10;
    }
    public static void main(String[] args) {
        ConstructorFunction obj = new ConstructorFunction();
        System.out.println(obj.num1);
        obj.NonConstructorFunction();
        System.out.println(obj.num1);
    }
    
}
