import java.util.Scanner;
import javax.swing.JOptionPane;

public class Test{
	public static void main(String[] args){
		// Scanner
		Scanner scan = new Scanner(System.in);
		/*scan.next();// String format
		scan.nextInt();// int
		scan.nextDouble();//double*/
		/*System.out.println("Please enter 3 numbers.")	;	
		int a = scan.nextInt();
		int b = scan.nextInt();
		int c = scan.nextInt();*/
		
		String s1=JOptionPane.showInputDialog(null, "Enter a number.");
		String s2=JOptionPane.showInputDialog(null, "Enter a number.");
		String s3=JOptionPane.showInputDialog(null, "Enter a number.");
		
		int a = Integer.parseInt(s1);
		int b = Integer.parseInt(s2);
		int c = Integer.parseInt(s3);
		
		calculate(a,b,c);
		
	}
	
	public static void calculate(int a, int b, int c){
		float sum = a+b+c;
		float avg = sum/3;
		int max = a, min =a;
		if(b>max)
			max = b;
		if (c> max )
			max = c;
			
		if(b<min)	min =b;
		if(c<min)	min = c;
		
		System.out.println("Sum:"+sum);
		System.out.printf("Average:%.2f\n",avg);
		System.out.println("Max:"+max);
		System.out.println("Min:"+min);
	}

}