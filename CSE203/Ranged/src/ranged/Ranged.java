/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ranged;
import java.util.*;
/**
 *
 * @author CopotronicRifat
 */


public class Ranged {
public int a;
public int b;
    /**
     * @param args the command line arguments
     */
    public int max(int num1, int num2)
            {
                if (num1>num2)
                    return num1;
                else
                    return num2;
            }
    
    public int min(int num1, int num2)
            {
                if (num1>num2)
                    return num2;
                else
                    return num1;
            }
    
    public int multiply(int m, int n)
    {
        int max1 = max(m,n);
        int min1 = min(m,n);
        int multiplication=1;
        for(int i = min1; i<=max1; i++)
        {
            multiplication = multiplication * i;
        }
        return multiplication;
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Ranged obj = new Ranged();
        Scanner x = new Scanner(System.in);
        obj.a = x.nextInt();
        //Scanner x = new Scanner(System.in);
        obj.b = x.nextInt();
        int m = obj.multiply(obj.a, obj.b);
        System.out.println(m);
    }
    
}
