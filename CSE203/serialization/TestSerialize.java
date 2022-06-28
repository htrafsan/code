import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class TestSerialize {

	public static void main(String[] args) throws IOException, ClassNotFoundException {
		ArrayList<Student> students = new ArrayList<>();
		students.add(new Student("A","1",3.5f));
		students.add(new Student("B","1",3.5f));
				
		
		FileOutputStream fos = new FileOutputStream("Output.txt");
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		oos.writeObject(students);
		fos.close();
		System.out.println("Done");
		
		FileInputStream fis = new FileInputStream("output.txt");
		ObjectInputStream ois = new ObjectInputStream(fis);
		Object obj =ois.readObject();
		ArrayList<Student> s = (ArrayList<Student>)obj;
		for(Student st: s)
			System.out.println(st);
		//System.out.println(s);
		//System.out.println(s.);
	}

}
