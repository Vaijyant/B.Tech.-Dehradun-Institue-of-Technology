package inheritance;
public class teacher extends staff
{
        int salary; String publication;
   teacher(String n, int cd, int sal, String pub)
   {
       super(n, cd);
       salary = sal;
       publication = pub;
   }
   void display()
   {
       super.display();
       System.out.println("Salary : "+salary+"\nPublications : "+publication);
   }
}
