package employee;

public class CommissionEmployee extends Employee {
	 public double  commission;
     public double sale;

     public CommissionEmployee(String name, String id, String designation,double commission,double sale) {
   		super(name,id,designation);
   		this.commission= commission;
   		this.sale=sale;
     }

	@Override
	public void increaseSalary(double amt) {
		commission=commission+amt;
		
	}

	@Override
	public double getSalary() {
		
		return commission * sale;
	}

	@Override
	public void display() {
		
		super.display();
		System.out.println("Commission: "+commission);
	}
     
   }

