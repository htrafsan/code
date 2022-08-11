import java.io.Serializable;

public class Employee implements Serializable{
	String name,id;
	double salary;
	public Employee(String name, String id, double sal) {
		super();
		this.name = name;
		this.id = id;
		this.salary = sal;
	}
	
	
	public void increaseSalalry(double amt) {
		salary += amt;
	}


	@Override
	public String toString() {
		return "Employee [name=" + name + ", id=" + id + ", salary=" + salary + "]";
	}
	
	
	

}
