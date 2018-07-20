import javax .swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

class Login1 implements ActionListener
{
	JLabel l1,l2;
	JButton b1,b2;
	JTextField t1,t2;
	JFrame  f;
	Login1()
	{
		f=new JFrame();
		f.setLayout(null);
		f.setSize(700,600);
		f.setVisible(true);
		f.setTitle("ICICI Bank ");
		
		l1=new JLabel("ACCOUNT NUMBER");
		l1.setBounds(100,150,150,50);
		f.add(l1);
		
		t1=new JTextField();
		t1.setBounds(300,150,150,50);
		f.add(t1);
		
		l2=new JLabel("PASSWORD");
		l2.setBounds(100,250,150,50);
		f.add(l2);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		t2=new JTextField();
		t2.setBounds(300,250,150,50);
		f.add(t2);

		b1=new JButton("LOGIN");
		b1.setBounds(150,330,150,70);
		f.add(b1);
		
		b2=new JButton("CHANGE PASSWORD");
		b2.setBounds(350,330,150,70);
		f.add(b2);
		
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		if(ae.getSource()==b1)
		{
			try
			{
				Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
				Connection con=DriverManager.getConnection("jdbc:odbc:icici");
				PreparedStatement ps=con.prepareStatement("select * from password where Accountno=? and password=?");
				ps.setString(1 ,t1.getText());
				ps.setString(2,t2.getText());
				ResultSet rs=ps.executeQuery();
				int reco=0;
				while(rs.next())
				{
					reco++;
				}
				if(reco>0)
				{
					//StudentForm s=new StudentForm();
            			}
			}
			catch(Exception e)
			{
			}
		}
	}

}