package employee;

public class HourlyEmployee extends Employee {
      public double  hourlyRate;
      public double hourWorked;
      
      public HourlyEmployee(String name, String id, String designation,double hourlyRate,double hourWorked) {
  		super(name,id,designation);
  		this.hourlyRate= hourlyRate;
  		this.hourWorked=hourWorked;
  }

	@Override
	public void increaseSalary(double amt) {
		
		hourlyRate=hourlyRate+amt;
	}

	@Override
	public double getSalary() {
		
		return hourWorked*hourlyRate;
	}

	@Override
	public void display() {
		
		super.display();
		System.out.println("Rate: "+hourlyRate);
	}
}
