package MainPackage;
import java.awt.Color;
import javax.swing.*;
import java.awt.event.*;
public class ChangeColor implements ActionListener
{
    JFrame jf;
    JPanel jp;
    JButton btnR,btnG,btnB;
    public ChangeColor()
    {
        jf=new JFrame();
        jf.setTitle("Change Panel COlor");
        
        jf.setVisible(true);
        jf.setSize(400,400);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
          jp=new JPanel();
         
        btnR=new JButton("RED");
         btnR.addActionListener(this);
         
         
        btnG=new JButton("GREEN");
        btnG.addActionListener(this);
        
        btnB=new JButton("BLUE");
        btnB.addActionListener(this);
        
        jp.add(btnR);
        jp.add(btnG);
        jp.add(btnB);
        
        jf.add(jp);
        
    }
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

