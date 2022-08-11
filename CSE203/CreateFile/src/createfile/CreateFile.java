/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package createfile;

import java.io.File;
import java.io.IOException;
/**
 *
 * @author CopotronicRifat
 */
public class CreateFile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    
        File f = new File("C:\\Users\\CopotronicRifat\\OneDrive\\Desktop\\FILE.txt");
        try
        {
            if(f.createNewFile())
            {
                System.out.println("File Created!");
            }
            else
            {
                System.out.println("File already exists!");
            }
        }
        catch(IOException e)
        {
            System.out.println("An error occured!");
            e.printStackTrace();
        }
        
    }
    
}
