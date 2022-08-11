/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package writetofile;

import java.io.FileWriter;
import java.io.IOException;
/**
 *
 * @author CopotronicRifat
 */
public class WriteToFile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try
        {
            FileWriter writer = new FileWriter("C:\\Users\\CopotronicRifat\\OneDrive\\Desktop\\FILE.txt");
            writer.write("Hello from FILE!");
            writer.close();
            System.out.println("Written in File done!");
        }
        catch(IOException e)
        {
            System.out.println("Error");
            e.printStackTrace();
        }
    }
    
}
