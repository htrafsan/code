package employee;

public class Employee {
	public String name;
	public String id ;
	public String designation;
	
	public Employee(String name, String id, String designation) {
		this.name = name;
		this.id = id;
		this.designation = designation;
	}
	
    public void increaseSalary(double amt)
    {
    	
    }
    
   public  double getSalary()
   {
	   return 0;
   }
   
   public void display()
	{
		System.out.println("Name: ["+name+"]; Id :["+id+"]; Desig: ["+designation+"];");
	}
}
