import  java.awt.*;
import  java.awt.event.*;
import  java.sql.*;
import javax.swing.*;
import  java.awt.*;

class Statement1 
{
  
   JFrame j;
List c1,c2,c3;
	 
   Statement1()
{
 
        j=new JFrame();
   j.setSize(400,500);
j.setVisible(true);
j.setLayout(null);

c1=new List();
c1.setBounds(50,100,100,100);
j.add(c1);


c2=new List();
c2.setBounds(150,100,150,100);
j.add(c2);

c3=new List();
c3.setBounds(300,100,150,100);
j.add(c3);


 j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	        try{
	            Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
	          Connection  conn=DriverManager.getConnection("Jdbc:Odbc:icici");
	          PreparedStatement  st=conn.prepareStatement(" Select *from withdraw ");

	         ResultSet rs=st.executeQuery();
	           while(rs.next())
	           {
                            
                       c1.add(rs.getString(1));
                        c2.add(rs.getString(2));
                       c3.add(rs.getString(3));
	           
                          }	

            }
	       catch(Exception e){}
	       	
	  }
}             
class Statement
{
	                   public static void main(String a[])
{
  Statement1 s=new Statement1();
}
}	 