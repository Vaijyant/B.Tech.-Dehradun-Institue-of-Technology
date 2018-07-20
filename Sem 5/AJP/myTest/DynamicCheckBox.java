import java.awt.*;
import javax.swing.*;

class DynamicCheckBox extends JFrame
{
	JCheckBox jcb[] = new JCheckBox[10];
	JScrollPane jsp;
	JPanel p;

	DynamicCheckBox()
	{
		setTitle("Dynamic JCheckBox Experiment");
		setSize(300, 300);

		p = new JPanel(new GridLayout(10, 1, 10, 10));
		jsp = new JScrollPane(p);
		add(jsp);

		for(int i=0; i<10; i++)
		{
			System.out.println("CheckBox: "+i);
			jcb[i] = new JCheckBox("CheckBox: "+i);
			p.add(jcb[i]);
		}

		setVisible(true);
		setResizable(false);
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}
	public static void main (String args[])
	{
		new DynamicCheckBox();
	}
}