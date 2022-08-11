/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arrayon;

/**
 *
 * @author CopotronicRifat
 */
public class ArrayOn {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int num[] = new int[10];
        float values[] = new float[10];
        
        for(int i=0;i<10;i++)
        {
            num[i] = i+1;
        }
        
        int number[] = {10, 89, 5};
        System.out.println(number[0]);
        //int[] num = new int[10];
        
        
        int rowcol[][] = new int[10][10];
        for(int i=0; i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                rowcol[i][j] = i*j;
            }
        }
        
        for(int i=0; i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                System.out.print(rowcol[i][j]+ " ");
            }
            System.out.println();
        }
        int set[][] = {{1,3},{3,5}};
        
        String str = new String("CSE UAP");
        String strarr[] = {"CSE", "UAP"};
        
        
        
    }
    
}
