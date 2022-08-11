/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgtry;

/**
 *
 * @author CopotronicRifat
 */
public class TRY {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try 
        {
            int[] myNumbers = {1, 2, 3};
            System.out.println(myNumbers[10]);
        } 
        catch (Exception e) 
        {
            System.out.println("Something went wrong.");
        }
    }
 }
  
