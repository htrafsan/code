import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

import javax.swing.JOptionPane;

/**
 * 
 */

/**
 * @author Teachers
 *
 */
public class HelloWorldExample {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		//		System.out.println("Please enter a number:");
		//		Scanner scan = new Scanner(System.in);
		//		int a =	scan.nextInt();
		//		System.out.printf("The number is: %d\n", a);
		//		int b = scan.nextInt();
		//		System.out.println(b);
		try {
			Scanner scan = new Scanner(new File("input.txt"));
			while (scan.hasNextLine()) {
				String s= scan.nextLine();
				System.out.println(s);
			}
			//s= scan.nextLine();
			//			System.out.println(scan.nextInt());
			//			System.out.println(scan.nextInt());
		} catch (FileNotFoundException e) {
			//e.printStackTrace();
		}
	}

}













