import java.awt.EventQueue;

public class TestApp {
	static BankHome frame ;
	static Transaction frame1;

	static Bank bank = new Bank();
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					frame = new BankHome();
					frame.setVisible(true);
					frame1 = new Transaction();
					//frame1.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
}
