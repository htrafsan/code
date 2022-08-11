/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vehicle;

/**
 *
 * @author CopotronicRifat
 */

public class VEHICLE {

    /**
     * @param args the command line arguments
     */
    int a = 12;
    int b = 20;
    int c = 30;
    
    void print()
    {
        System.out.println(a*b*c);
    }
    
    public static void main(String[] args) {
        VEHICLE v1 = new VEHICLE();
        v1.print();
    }
    
}
