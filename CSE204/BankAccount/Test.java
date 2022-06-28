import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Test {
	static JFrame frame;

	public static void main(String[] args) {
		// Create container/JFrame
		
		frame = new JFrame("My First GUI");
		frame.setSize(300, 200);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		frame.setLayout(new FlowLayout());
		JButton button = new JButton("Click Here");
		frame.add(button);
		
		button.addActionListener(new ButtonHandler());
		
		
		frame.setVisible(true);

	}
	
	static class ButtonHandler implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent e) {
			if(!frame.getContentPane().getBackground().equals(Color.red))
				frame.getContentPane().setBackground(Color.red);
			else
				frame.getContentPane().setBackground(Color.blue);
		}
		
	}

}
