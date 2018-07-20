
import  javax.swing.*;
import  java.awt.*;
import  java.sql.*;
import  java.awt.event.*;
import  java.util.*;
 class  Withdraw1 implements ActionListener
{
   JLabel l1,l2,l3;
  JButton b1, b2;
JTextField t1;
JFrame f;
Withdraw1()
{
   f=new JFrame();
f.setTitle("Withdraw screen");
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

Calendar Cal=Calendar.getInstance();
int mm=Cal.get(Calendar.MONTH)+1;
int dd=Cal.get(Calendar.DATE);
int yy=Cal.get(Calendar.YEAR);

String  ce=""+dd+"/"+mm+"/"+yy;

Formatter fmt=new Formatter();
fmt.format("%tr",Cal);
l3=new JLabel("Time:"+fmt);
l3.setBounds(20,20,100,20);
f.add(l3);

l2=new JLabel("Date : "+ce);
l2.setBounds(20,40,100,20);
f.add(l2);

b1=new JButton("Withdraw");
b2=new JButton("Exit");
b1.setBounds(150,200,90,40);
b2.setBounds(300,200,90,40);
f.add(b1);
f.add(b2);

b1.addActionListener(this);
b2.addActionListener(this);


}

public void actionPerformed(ActionEvent ae)
{    String id=t1.getText();
     if(id.length() == 0)
        {
            JOptionPane.showMessageDialog(f,"Please enter amount");
            t1.grabFocus();
         }
  if(ae.getSource()==b1)
{
   try{
           Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
          Connection con=DriverManager.getConnection("jdbc:odbc:icici");
   

       PreparedStatement ps=con.prepareStatement(" insert into withdraw values(?,?,?)");

            
             ps .setString(2,l3.getText());   
            ps .setString(3,l2.getText());         
               ps.setString(1,t1.getText());
                                ps.executeUpdate();
  


                  }

             catch(Exception e)
                  {}
              }
if(ae.getSource() == b2)
{
	Welcome w = new Welcome();
}
          }
}

class Withdraw
{
public static void main(String a[])
{
  Withdraw1 w=new Withdraw1();
           }
  }
  
