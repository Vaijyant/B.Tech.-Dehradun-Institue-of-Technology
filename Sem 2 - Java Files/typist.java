package inheritance;
public class typist extends staff
{
    int speed;
    typist(String n, int c,  int sp)
    {
        super(n, c);
        speed = sp;
    }
    void display()
    {
        super.display();
        System.out.println("Speed : "+speed);
    }
}
