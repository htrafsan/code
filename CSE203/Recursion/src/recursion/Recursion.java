/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package recursion;

/**
 *
 * @author CopotronicRifat
 */
public class Recursion {

    /**
     * @param args the command line arguments
     */
    public static int sum(int num)
    {
        if(num>0)
        {
            return num + sum(num - 1);
        }
        else
        {
            return 0;
        }
    }
    public static void main(String[] args) {
        int summation = sum(10);
        System.out.println(summation);
    }
    
}
