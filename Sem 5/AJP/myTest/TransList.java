package transferlist;
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class TransList extends Applet implements ActionListener
{
    List l1, l2;
    Button b1, b2;
    public void init()
    {
        l1 = new List();
        l2 = new List();
        b1 = new Button(">>");
        b2 = new Button("<<");
        l1.add("Dehradun");
        l1.add("Delhi");
        l1.add("Agra");
        l1.add("Meerut");
        l1.add("Kolkata");
        
        b1.addActionListener(this);
        b2.addActionListener(this);
    }
    public void actionPermormed(ActionEvent ae)
    {
        if(ae.getSource() == b1)
        {
            l2.add(l1.getSelectedItem());
            l1.remove(l1.getSelectedItem());
        }
        if(ae.getSource() == b2)
        {
             l1.add(l2.getSelectedItem());
            l2.remove(l2.getSelectedItem());
        }
    }
}
