/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


package readfromfile;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
/**
 *
 * @author CopotronicRifat
 */
public class ReadFromFile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try
        {
            File read = new File("C:\\Users\\CopotronicRifat\\OneDrive\\Desktop\\FILE.txt");
            Scanner reader = new Scanner(read);
            while(reader.hasNextLine())
            {
                String line = reader.nextLine();
                System.out.println(line);
            }
            reader.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println("File NOT found!");
            e.printStackTrace();
        }
    }
    
}
