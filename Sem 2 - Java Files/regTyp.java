package inheritance;
public class regTyp extends typist
{
    int salary;
    regTyp(String n, int c,  int sp, int sal)
    {
        super(n, c, sp);
        salary = sal;
    }
    void display()
    {
        super.display();
        System.out.println("Salary : " + salary);
    }
}
