/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package constructor;

/**
 *
 * @author CopotronicRifat
 */
public class Constructor {

    /**
     * @param args the command line arguments
     */
    int a;
    
    public void Constructor()
    {
        int a = 10;
        System.out.println(a);
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Constructor c1 = new Constructor();
        //c1.Constructor();
        c1.Constructor();
        System.out.println(c1.a);
        
        
    }
    
}
