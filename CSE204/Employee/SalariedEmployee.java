package employee;

public class SalariedEmployee extends Employee {
   public double  monthlySalary;
   
   public  SalariedEmployee(String name, String id, String designation,double monthlySalary) {
		super(name,id,designation);
		this.monthlySalary=monthlySalary;
}

@Override
public void increaseSalary(double amt) {
	
	monthlySalary=monthlySalary+amt;
}

@Override
public double getSalary() {
	
	return monthlySalary ;
}

@Override
public void display() {
	
	super.display();
	System.out.println("Salary:"+monthlySalary);
}
}
