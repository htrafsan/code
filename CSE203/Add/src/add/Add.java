/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package add;

/**
 *
 * @author CopotronicRifat
 */

import javax.swing.JOptionPane;

public class Add {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String a = JOptionPane.showInputDialog("Enter First Number");
        String b = JOptionPane.showInputDialog("Enter Second Number");
        int num1 = Integer.parseInt(a);
        int num2 = Integer.parseInt(b);
        int sum = num1 + num2;
        JOptionPane.showMessageDialog(null, "Summation of two integers is: "+ sum, "Sum of Integers", JOptionPane.PLAIN_MESSAGE);
        
    }
    
}
