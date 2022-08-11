/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sum;

/**
 *
 * @author CopotronicRifat
 */
public class SUM {

    int a = 10;
    int b = 20;
    
    void print_sum(int m, int n)
    {

        int sum = 0;
        for (int i = m; i<=n; i++)
        {
            sum = sum + i;
        }
        System.out.println(sum);
    }
        
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        SUM s1 = new SUM();
        s1.print_sum(5, 10);
    }
    
}
