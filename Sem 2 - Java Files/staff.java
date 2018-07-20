
package inheritance;

public class staff
{
    String name; int code;
    staff(String n, int c)
    {
        name = n;
        code = c;
    }
    void display()
    {
        System.out.println("Name : "+name+"\nCode : "+code);
    }
}
