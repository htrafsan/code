/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exceptionhandling;

/**
 *
 * @author CopotronicRifat
 */
public class ExceptionHandling {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 0;
        try
        {
            System.out.println(num1/num2);
        }
        catch(Exception e)
        {
            System.out.println("Divided by zero is undefined!");
            e.printStackTrace();
        }
        
        
    }
    
}
