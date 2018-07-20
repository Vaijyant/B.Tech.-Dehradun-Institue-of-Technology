package MainPackage;
import java.awt.Color;
import javax.swing.*;
import java.awt.event.*;
public class ChangeColor1
{
    JFrame jf;
    JPanel jp;
    JButton btnR,btnG,btnB;
    public ChangeColor1()
    {
        jf=new JFrame();
        jf.setTitle("Change Panel COlor");
        
        jf.setVisible(true);
        jf.setSize(400,400);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
          jp=new JPanel();
         
        btnR=new JButton("RED");
        btnR.addActionListener(new HandleButtonEvent());
         
         
        btnG=new JButton("GREEN");
        btnG.addActionListener(new HandleButtonEvent());
        
        btnB=new JButton("BLUE");
        btnB.addActionListener(new HandleButtonEvent());
        
        jp.add(btnR);
        jp.add(btnG);
        jp.add(btnB);
        
        jf.add(jp);
        
    }
    class HandleButtonEvent implements ActionListener
    {
         public void actionPerformed(ActionEvent e)
        {
            if(e.getSource() == btnR)
            {
                jp.setBackground(Color.red);
                JOptionPane.showMessageDialog(jf,"Red Button Clicked");
            }
            if(e.getSource() == btnG)
            {
                jp.setBackground(Color.green);
                JOptionPane.showMessageDialog(jf,"Green Button Clicked");
            }
            if(e.getSource() == btnB)
            {
                 jp.setBackground(Color.blue);
                JOptionPane.showMessageDialog(jf,"Blue Button Clicked");
            }
    }
    }
   
}

