package MainPackage;
import javax.swing.*;
import java.awt.event.*;
public class StudentForm 
{
    JFrame jf;
    JPanel jp;
    JLabel lblID,lblName,lblCity;
    JTextField txtID,txtName;
    JComboBox cmbCity;
    JButton btnSubmit,btnClear,btnExit;
    public StudentForm()
    {
        //JFrame jf=new JFrame("STudent Registration Form");
        
       jf=new JFrame();
        jf.setTitle("Student Registration Form");
        
        jf.setVisible(true);
        jf.setSize(400,400);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        jp=new JPanel();
               
        lblID=new JLabel("Student ID");
         lblName=new JLabel();
        lblName.setText("Student Name");
         lblCity=new JLabel("City");
        
         txtID=new JTextField(10);
        txtName=new JTextField(10);
        
        String cities[]={"Dehradun","Haridwar","Delhi"};
        cmbCity=new JComboBox(cities);
        cmbCity.addItem("Agra");
        cmbCity.addItem("Pune");
        
         btnSubmit=new JButton("Submit");
        btnSubmit.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                HandleSubmit();
            }
        });
        
        
        btnClear=new JButton("Clear");
         btnClear.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                HandleClear();
            }
        });
         btnExit=new JButton("Exit");
         btnExit.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                HandleExit();
            }
        });
        
        
        jp.add(lblID);
        jp.add(txtID);
        
        
        jp.add(lblName);
        jp.add(txtName);
        
        jp.add(lblCity);
        jp.add(cmbCity);
        
        jp.add(btnSubmit);
        jp.add(btnClear);
        jp.add(btnExit);
        
        jf.add(jp);
        
        
        
        
    }
    private void HandleSubmit()
    {
        String id=txtID.getText();
        String name=txtName.getText();
        String city=cmbCity.getSelectedItem().toString();
        
        if(id.length() == 0)
        {
            JOptionPane.showMessageDialog(jf,"Please enter your ID");
            txtID.grabFocus();
            return;
        }
        if(name.length() == 0)
        {
            JOptionPane.showMessageDialog(jf,"Please enter ur name");
            txtName.grabFocus();
            return;
        }
        //String msg="Congratulations following data has been submiteed\n ID = " +id +"\nName = "+name +"\n City = "+city;
        String msg="Congratulations following data has been submitted\n";
        msg=msg+"Id = "+id+"\n";
        msg=msg+"Name = "+name+"\n";
        msg=msg+"City = "+city+"\n";
        
        JOptionPane.showMessageDialog(jf, msg);
        
    }
    private void HandleClear()
    {
        txtID.setText("");
        txtName.setText("");
        txtID.grabFocus();
    }
    private void HandleExit()
    {
        System.exit(0);
    }
}


