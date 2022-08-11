import java.io.Serializable;

public class Student implements Serializable{
	
	String name, id;
	transient float cgpa;
	transient Address add;
	
	
	

	public Student(String name, String id, float cgpa, Address a) {
		super();
		this.name = name;
		this.id = id;
		this.cgpa = cgpa;
		this.add = a;
	}
	
	public Student(String name, String id, float cgpa) {
		super();
		this.name = name;
		this.id = id;
		this.cgpa = cgpa;
		//this.add = a;
	}
	
	




//	@Override
//	public String toString() {
//		return name + ":" + id + ":" + cgpa;
//	}






	@Override
	public boolean equals(Object arg0) {
		if(super.equals(arg0)) return true;
		
		if(arg0 instanceof Student) {
		
		Student s = (Student)arg0;
		
		if(this.id.equals(s.id) && this.cgpa == s.cgpa)
			return true;
		}
		
		return false;
		
		
		
	}





	@Override
	public String toString() {
		return "Student [name=" + name + ", id=" + id + ", cgpa=" + cgpa + "]";
	}

}








