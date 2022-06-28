public class BankAccount {
	String name;
	String id;
	double balance;
	
	public BankAccount(String name, String id, double balance) {
		this.name = name;
		this.id = id;
		this.balance = balance;
	}
	
	void deposit(double depAmount) {
		balance += depAmount;
	}
	
	void withdraw(double withAmount) {
		if(withAmount <= balance)
			balance -= withAmount;
	}
	
	double getBalance() {
		return balance;
	}
	
	void display() {
		System.out.println("Name: ["+name+"]");
		System.out.println("Id: ["+id+"]");
		System.out.println("Balance: ["+balance+"]");
		System.out.printf("\n");
	}

	@Override
	public String toString() {
		return "name=" + name + ", id=" + id + ", balance=" + balance;
	}
	
	
}
