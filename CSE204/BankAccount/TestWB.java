import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.Color;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JTextField;

public class TestWB extends JFrame {

	private JPanel contentPane;
	private JTextField textField;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					TestWB frame = new TestWB();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public TestWB() {
		setTitle("My GUI");
		setBackground(Color.ORANGE);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBackground(Color.GREEN);
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JButton btnClickHere = new JButton("Click Here");
		btnClickHere.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				String data = textField.getText();
				int a = Integer.parseInt(data);
				a++;
				textField.setText(String.valueOf(a));
			}
		});
		btnClickHere.setBounds(163, 126, 128, 23);
		contentPane.add(btnClickHere);
		
		textField = new JTextField();
		textField.setEditable(false);
		textField.setText("0");
		textField.setBounds(181, 77, 86, 20);
		contentPane.add(textField);
		textField.setColumns(10);
	}
}
