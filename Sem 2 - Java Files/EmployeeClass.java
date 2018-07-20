package MainPackage;
import java.awt.*;
public class EmployeeClass
{
    public EmployeeClass()
    {
        //JFrame jf=new JFrame("STudent Registration Form");
        
        Frame jf=new Frame();
        jf.setTitle("STudent Registration Form");
        
        jf.setVisible(true);
        jf.setSize(400,400);
        
        
        Panel jp=new Panel();
               
        Label lblID=new Label("STudent ID");
        Label lblName=new Label();
        lblName.setText("Student Name");
        Label lblCity=new Label("City");
        
        TextField txtID=new TextField(10);
        TextField txtName=new TextField(10);
        
        
        Choice cmbCity=new Choice();
        cmbCity.addItem("Agra");
        cmbCity.addItem("Pune");
        cmbCity.addItem("delhi");
        cmbCity.addItem("dehradun");
        
        Button btnSubmit=new Button("Submit");
        Button btnClear=new Button("Clear");
        Button btnExit=new Button("Exit");
        
        
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
}

