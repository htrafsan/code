import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.DefaultListModel;
import javax.swing.JButton;
import javax.swing.JList;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class BankHome extends JFrame {

	private JPanel contentPane;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	DefaultListModel<String> data = new DefaultListModel<String>();

	

	/**
	 * Create the frame.
	 */
	public BankHome() {
		setTitle("Homepage");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 481, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblName = new JLabel("Name");
		lblName.setBounds(27, 35, 46, 14);
		contentPane.add(lblName);
		
		textField = new JTextField();
		textField.setBounds(128, 32, 86, 20);
		contentPane.add(textField);
		textField.setColumns(10);
		
		textField_1 = new JTextField();
		textField_1.setColumns(10);
		textField_1.setBounds(128, 60, 86, 20);
		contentPane.add(textField_1);
		
		JLabel lblId = new JLabel("iD");
		lblId.setBounds(27, 63, 46, 14);
		contentPane.add(lblId);
		
		textField_2 = new JTextField();
		textField_2.setColumns(10);
		textField_2.setBounds(128, 91, 86, 20);
		contentPane.add(textField_2);
		
		JLabel lblBalance = new JLabel("Balance");
		lblBalance.setBounds(27, 94, 46, 14);
		contentPane.add(lblBalance);
		
		JButton btnCreate = new JButton("Create");
		btnCreate.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				String n = textField.getText();
				String i = textField_1.getText();
				double b = Double.parseDouble(textField_2.getText());
				BankAccount acc = TestApp.bank.addAccount(n, i, b);
				data.addElement(acc.toString());
				
			}
		});
		btnCreate.setBounds(251, 90, 89, 23);
		contentPane.add(btnCreate);
		
		JList list = new JList(data);
		list.setBounds(27, 153, 313, 97);
		contentPane.add(list);
		
		JButton btnTransaction = new JButton("Transaction");
		btnTransaction.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				TestApp.frame1.setVisible(true);
			}
		});
		btnTransaction.setBounds(350, 90, 89, 23);
		contentPane.add(btnTransaction);
	}
}
