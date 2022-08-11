/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package rangedmultiply;
import java.util.*;
/**
 *
 * @author CopotronicRifat
 */


public class RANGEDMULTIPLY {
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
        int max1 = max(m, n);
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
        RANGEDMULTIPLY obj = new RANGEDMULTIPLY();
        Scanner x = new Scanner(System.in);
        int number1 = x.nextInt();
        Scanner y = new Scanner(System.in);
        int number2 = y.nextInt();
        int m = obj.multiply(number1, number2);
        System.out.println(m);
    }
    
}
