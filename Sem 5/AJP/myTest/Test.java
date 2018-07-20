import java.awt.*;
import javax.swing.*;

public class Test extends JFrame
{
    public Test()
    {

        this.setExtendedState(this.MAXIMIZED_BOTH);
    }

    public static void main(String[] args)
    {
        Test t = new Test();
        t.setVisible(true);
    }
}