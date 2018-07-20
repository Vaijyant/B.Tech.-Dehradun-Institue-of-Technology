package inheritance;
public class officer extends staff
{
    String grade;
    officer (String n, int cd, String gd)
   {
       super(n, cd);
       grade = gd;
   }
   void display()
   {
       super.display();
       System.out.println("Grade : "+grade);
   }
}