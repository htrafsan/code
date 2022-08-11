/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package this_keyword;

/**
 *
 * @author CopotronicRifat
 */
public class This_keyword {
    int num1 = 3;
    int num2 = 5;
    /**
     * @param args the command line arguments
     */
    
    public void sum(int a, int b)
    {
        this.num1 = a;
        this.num2 = b;
        System.out.println(this.num1 + this.num2);
    }
    public static void main(String[] args) {
        // TODO code application logic here
        
        This_keyword t1 = new This_keyword();
        System.out.println(t1.num1 + t1.num2);
        t1.sum(5, 8);
        System.out.println(t1.num1 + t1.num2);
        
    }
    
}
