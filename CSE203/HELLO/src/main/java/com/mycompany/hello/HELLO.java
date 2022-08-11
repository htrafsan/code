/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.mycompany.hello;
import java.util.Scanner;
/**
 *
 * @author CopotronicRifat
 */
public class HELLO {
    public static void main(String[] args)
    {
        System.out.println("Hello World!");
        Scanner sc = new Scanner(System.in);
  
        
        String name = sc.nextLine();
  
        
        char gender = sc.next().charAt(0);
  
        
        int age = sc.nextInt();
        long mobileNo = sc.nextLong();
        double cgpa = sc.nextDouble();
    }
    
}
