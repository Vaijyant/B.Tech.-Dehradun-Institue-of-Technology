

import javax .swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

class Login1 implements ActionListener
{
        JLabel l1,l2;
	JButton b1,b2;
	JTextField t1;
Connection con;
PreparedStatement ps;
ResultSet rs;
        TextField t2;
	JFrame f;
	Login1()
	{
		f=new JFrame();
		f.setLayout(null);
		f.setSize(600,250);
		f.setVisible(true);
		f.setTitle("ICICI Bank ");
                f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		l1=new JLabel("ACCOUNT NUMBER"); l1.setBounds(50, 10, 150, 30); f.add(l1);
		
		t1=new JTextField(); t1.setBounds(250, 10,150,30); f.add(t1);
		
		l2=new JLabel("PASSWORD"); l2.setBounds(50, 75,150, 30); f.add(l2);
                
		t2=new TextField(); t2.setEchoChar('*'); 
t2.setBounds(250,75,150,30); f.add(t2);
		
		b1=new JButton("LOGIN"); b1.setBounds(100,140,150,30); f.add(b1);
		
		b2=new JButton("CANCEL"); b2.setBounds(350, 140, 150,30); f.add(b2);
		
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
		   con=DriverManager.getConnection("jdbc:odbc:icici");
				 ps=con.prepareStatement("select * from password where Accountno=? and password=?");
				ps.setString(1 ,t1.getText());
				
				ps.setString(2,t2.getText());
				  rs=ps.executeQuery();
				int reco=0;
				while(rs.next())
				{
					reco++;
				}
				if(reco>0)
				{
					Second s=new Second();
                                                                                               

				}
			}
			catch(Exception e)
			{

			}
		}
                if(ae.getSource() == b2)
                {
                   Welcome w=new Welcome();
                }
	}

}

class Login 
{
public static void main(String a[])
{
    Login1 x=new Login1();
}
}
