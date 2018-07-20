import javax.swing.*;
import java.awt.*;
import java.sql.*;
import java.awt.event.*;
class Deposit1 implements ActionListener
{
JLabel l1,l2;
JButton b1, b2;
JTextField t1;
JFrame f;
Deposit1()
{
f=new JFrame();
f.setTitle("deposit screen");
f.setSize(600,500);
f.setVisible(true);
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
f.setLayout(null);
l1=new JLabel("Amount");
l1.setBounds(100,150,90,30);
f.add(l1);

t1=new JTextField();
t1.setBounds(200,150,120,30);
f.add(t1);
b1=new JButton("Deposit");
b2=new JButton("Exit");
b1.setBounds(150,200,90,40);
b2.setBounds(300,200,90,40);
f.add(b1);
f.add(b2);
b1.addActionListener(this);
b2.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
{
String id=t1.getText();
if(id.length() == 0)
{
JOptionPane.showMessageDialog(f,"Please enter amount");
t1.grabFocus();
}
if(ae.getSource()==b1)
{
try
{      Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection con = DriverManager.getConnection("jdbc:odbc:icici");
PreparedStatement ps = con.prepareStatement(" insert into deposit values(?,?)");
ps.setString(2,t1.getText());
ps.setString(1,Login1.a);
ps.executeUpdate();
}
catch(Exception e)
{}
}
if(ae.getSource() == b2)
{
	Welcome y=new Welcome();
}
}
}
class Deposit
{
public static void main(String a[])
{
  		Deposit1 w=new Deposit1();
}
} 
