/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package basic;

/**
 *
 * @author CopotronicRifat
 */
import java.util.Scanner;
public class Basic {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
        int b = 20;
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        System.out.println("You entered " + num);
        
        Scanner line = new Scanner(System.in);
        String str = line.nextLine();
        System.out.println("You entered " + str);
        if(num < 10)
        {
            int a = 12;
            System.out.println("Less than 10");
            System.out.println(a);
        }
        //System.out.println(a);
        else 
        {
            System.out.println("Equal or greater than 10");
        }
        
        for(int i = 0; i<10; i++)
        {
            System.out.println(i+1);
        }
        
        int m = 15;
        int n = 4;
        System.out.println((float)m/(float)n);
        */
        int[] array = new int[10];
        for(int i = 0 ; i<5; i++)
        {
            Scanner input = new Scanner(System.in);
            array[i] = input.nextInt();
        }
        
        for(int i = 0; i<5; i++)
        {
            System.out.println(array[i]);
        }
        
        float pi;
        Scanner input = new Scanner(System.in);
        pi = input.nextFloat();
        System.out.println(pi);
        
    }
    
}
