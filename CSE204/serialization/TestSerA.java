import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class TestSerA {

	public static void main(String[] args) throws IOException, ClassNotFoundException {
//		FileOutputStream fos = new FileOutputStream("output.txt");
//		ObjectOutputStream oos = new ObjectOutputStream(fos);
//		oos.writeObject(new Student("A", "1", 3.5f, new Address()));
//		oos.close();
		
		FileInputStream fis = new FileInputStream("output.txt");
		ObjectInputStream ois = new ObjectInputStream(fis);
		Student obj = (Student)ois.readObject();
		System.out.println(obj);
		System.out.println(obj.add);
		System.out.println("Done");

	}

}
