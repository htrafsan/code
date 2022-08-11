/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package xor;

/**
 *
 * @author CopotronicRifat
 */
public class XOR {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int x = 10;
        int y = 20;
        x = x ^ y;
        System.out.println(x);
        System.out.println(y);
        y = x ^ y;
        System.out.println(x);
        System.out.println(y);
        x = x ^ y;
        System.out.println(x);
        System.out.println(y);
    }
    
}
