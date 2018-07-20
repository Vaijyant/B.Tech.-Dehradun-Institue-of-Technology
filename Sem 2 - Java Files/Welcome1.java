import javax.swing.*;
import java.awt.event.*;
import  java.awt.*;

class Welcome implements ActionListener
{
  JFrame f;
JButton b1;
JLabel p;
ImageIcon i;
 Welcome()
{
   f=new JFrame();
f.setSize(800,700);
f.setTitle("WELCOME");
f.setVisible(true);
f.setLayout(null);
i=new ImageIcon("1.png");

p=new JLabel("",i,JLabel.CENTER);
p.setBounds(0,0,800,700);
f.add(p);

b1=new JButton("Next");
b1.setBounds(650,600,90,35);
b1.setBackground(new Color (91,172,172));
f.add(b1);
b1.addActionListener(this);
}
public void actionPerformed(ActionEvent ae)
 {
         if(ae.getSource()==b1)
{    
    Login1 l=new Login1();
   
  }
}
}
class Welcome1
{
public static void main(String a[])
{
  Welcome n=new Welcome();
}
}



