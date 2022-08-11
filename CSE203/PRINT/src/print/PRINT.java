/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package print;

/**
 *
 * @author CopotronicRifat
 */
import java.util.*;
public class PRINT {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        double a = 10.12345;
        Formatter formatter = new Formatter();
        formatter.format("%.2f", a);
        System.out.println(formatter);
    }
    
}
