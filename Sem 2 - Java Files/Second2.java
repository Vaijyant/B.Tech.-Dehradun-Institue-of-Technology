import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class Second implements ActionListener
{
  JFrame jf;
JButton b1,b2,b3,b4,b5;
Second()
{
    jf=new JFrame();
 jf.setSize(700,400);
jf.setTitle("ICICI BANK");
jf.setLayout(null);
jf.setVisible(true);

b1=new JButton("DEPOSIT");
b1.setBounds(50,100,90,35);
jf.add(b1);

b2=new JButton("WITHDRAW");
b2.setBounds(150,100,120,35);
jf.add(b2);

b3.setBounds(280,100,90,35);
jf.add(b3);

b4=new JButton("STATEMENT");
b4.setBounds(380,100,120,35);
jf.add(b4);

b5=new JButton("EXIT");
b5.setBounds(510,100,80,35);
jf.add(b5);

b1.addActionListener(this);

b2.addActionListener(this);


b4.addActionListener(this);
b5.addActionListener(this);
}

public void actionPerformed(ActionEvent ae)
{ 
    if(ae.getSource()==b1)
               {       
             Deposit1 d=new Deposit1();
                }
if(ae.getSource()==b2)
 {
      Withdraw1 w=new Withdraw1();
}

 
  if(ae.getSource()==b4)
          {
    Statement1 q=new Statement1();
                      }

 if(ae.getSource()==b5)
{
  
Welcome wc=new Welcome();
   }

}
}

class Second2
{
public static void main(String a[])
{   
    Second c=new Second();
}
}
