package inheritance;
public class casTyp extends typist
{
    int wages;
    casTyp(String n, int c,  int sp, int wag)
    {
        super(n, c, sp);
        wages = wag;
    }
    void display()
    {
        super.display();
        System.out.println("Wages : " + wages);
    }
}
