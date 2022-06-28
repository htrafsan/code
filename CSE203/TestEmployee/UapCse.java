import java.io.Serializable;

public class UapCse implements Serializable{
	private Employee[] accounts = new Employee[10];
	//private int count=0;
	
	
	public void addEmployee(String name, String id, double sal) {
		Employee ba = new Employee(name, id, sal);
		addEmployee(ba);
	}


	private void addEmployee(Employee ba) {
		int index = getLastIndex();
		if(index>=0)
			accounts[index] = ba;
		
		
	}
	
	public int getLastIndex() {
		for(int i=0; i<accounts.length; i++) {
			if(accounts[i] == null)
				return i;
		}
		
		return -1;
	}
	
	public void increaseSalary(String id, double amt) {
		Employee ba = findEmployee(id);
		if(ba != null)
			ba.increaseSalalry(amt);
	}
	
	public Employee findEmployee(String id) {
		for(int i=0; i<accounts.length; i++) {
			if(accounts[i] == null)
				return null;
			if(accounts[i].id.equals(id))
				return accounts[i];
		}
		
		return null;
	}


	public void display() {
		for(int i=0; i<accounts.length; i++) {
			if(accounts[i] == null)
				break;
			System.out.println(accounts[i]);
		}
	}
}
