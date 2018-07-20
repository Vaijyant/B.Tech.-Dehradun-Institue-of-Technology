package MainPackage;
import java.awt.Color;
import javax.swing.*;
import java.awt.event.*;
public class ChangeColor2
{
    JFrame jf;
    JPanel jp;
    JButton btnR,btnG,btnB;
    public ChangeColor2()
    {
        jf=new JFrame();
        jf.setTitle("Change Panel COlor");
        
        jf.setVisible(true);
        jf.setSize(400,400);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
          jp=new JPanel();
         
        btnR=new JButton("RED");
        btnR.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                jp.setBackground(Color.red);
            }
        }
                );
         
        btnG=new JButton("GREEN");
        btnG.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                HandleGEvent();
            }
        }
                );
        
        
        btnB=new JButton("BLUE");
        btnB.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                HandleBEvent();
            }
        }
                );
        
        jp.add(btnR);
        jp.add(btnG);
        jp.add(btnB);
        
        jf.add(jp);
        
    }
    private void HandleGEvent()
    {
        jp.setBackground(Color.green);
        
    }
    private void HandleBEvent()
    {
        jp.setBackground(Color.blue);
        
    }
}

