/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package box;

/**
 *
 * @author CopotronicRifat
 */
public class BOX {

    /**
     * @param args the command line arguments
     */
    double length = 10;
    double width = 20;
    double height = 15;
    
    double volume()
    {
        return length*width*height;
    }
    
    void print_area()
    {
        double area = 2*(length*width + width*height + height* length);
        System.out.println(area);
    }

       
    public static void main(String[] args) {
     
    BOX b1 = new BOX();
    double a = b1.volume();
    System.out.println(a);
    b1.print_area();
    System.out.println(b1.length);
    
    }
    
    
}
