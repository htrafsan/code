import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class Test {

	public static void main(String[] args) {
		Employee e = new Employee("abc", "123", 500000);
		
		try {
			ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("text.txt"));
			oos.writeObject(e);
			oos.close();
			System.out.println("serialization done");
		} catch (IOException e1) {
			e1.printStackTrace();
		}
		
		try {
			ObjectInputStream ois = new ObjectInputStream(new FileInputStream("text.txt"));
			Employee e1 = (Employee)ois.readObject();
			System.out.println(e1);
		} catch (IOException | ClassNotFoundException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}

	}

}
