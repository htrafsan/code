/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package methodoverloading;

/**
 *
 * @author CopotronicRifat
 */
public class METHODOVERLOADING {

    /**
     * @param args the command line arguments
     */
    
    public int sum(int a, int b)
    {
        System.out.println(a+b);
        return a+b;
    }
    
    public double sum(double x, double y)
    {
        System.out.println(x+y);
        return 0;
    }
    
    public int sum(int p, int q, int r)
    {
        System.out.println(p+q+r);
        return 0;
    }
    
    public static void main(String[] args) {
        METHODOVERLOADING obj = new METHODOVERLOADING();
        obj.sum(5, 6);
        obj.sum(3.14, 5.46);
        obj.sum(4,5,6);
        
        int num = obj.sum(10, 20);
        System.out.println(num);
        

    }
    
}
