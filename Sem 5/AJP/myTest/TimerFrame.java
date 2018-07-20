import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.text.*;
import java.util.Date;

class TimerFrame extends JFrame implements ActionListener
{
	Timer t;
	JLabel timeLabel;
	int i=0;
	public TimerFrame()
	{
		setSize(400, 400);
		setLocationRelativeTo(null);
		setResizable(false);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);

		timeLabel = new JLabel();
		timeLabel.setText(""+i);

		updateTime();
		add(timeLabel);

		add(timeLabel);
		t = new Timer(1000,this);
		t.start();


	}
	void updateTime()
	{
		i++;
		timeLabel.setText(""+i);
	}

	public void actionPerformed(ActionEvent evt)
	{
			updateTime();
	}

	public static void main(String args[])
	{
		new TimerFrame();
	}
}