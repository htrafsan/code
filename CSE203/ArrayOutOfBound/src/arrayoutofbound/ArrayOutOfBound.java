/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arrayoutofbound;

/**
 *
 * @author CopotronicRifat
 */
public class ArrayOutOfBound {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3};
        try
        {
            System.out.println(numbers[10]);
        }
        catch(Exception error)
        {
            System.out.println("Array index out of bound");
            error.printStackTrace();
        }
    }
    
}
