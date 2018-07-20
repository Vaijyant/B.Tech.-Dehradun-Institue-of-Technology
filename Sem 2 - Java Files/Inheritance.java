package inheritance;
import java.io.*;
public class Inheritance
{
    public static void main(String[] args)throws IOException
    {
        String name, pub, gd;
                int sal, cd, sp;
        BufferedReader y = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter choice\n1. Teacher\n2. Officer\n3. Typist ");
        int chT; int ch = Integer.parseInt(y.readLine());
        switch (ch)
        {
            case 1:
                System.out.println("Enter Name, Code, Salary and Publications");
                name = y.readLine();
                cd = Integer.parseInt(y.readLine());
                sal = Integer.parseInt(y.readLine());
                pub = y.readLine();
                teacher t = new teacher(name, cd, sal, pub);
                System.out.println("Details enterd: ");
                t.display();
                break;
            case 2:
                System.out.println("Enter Name, Code, grade");
                name = y.readLine();
                cd = Integer.parseInt(y.readLine());
                gd = y.readLine();
                officer o = new officer(name, cd, gd);
                System.out.println("Details enterd: ");
                o.display();
                break;
            case 3:
                System.out.println("Ente 1. for Regular 2. for Casual");
                        chT = Integer.parseInt(y.readLine());
                switch(chT)
                {
                    case 1:
                        System.out.println("Enter name, code, speed and salary");
                        name = y.readLine();
                        cd = Integer.parseInt(y.readLine());
                        sp = Integer.parseInt(y.readLine());
                        sal = Integer.parseInt(y.readLine());
                        regTyp rT = new regTyp(name, cd, sp, sal);
                        System.out.println("Details enterd: ");
                         rT.display();
                        break;
                    case 2:
                        System.out.println("Enter name, code, speed and wages");
                        name = y.readLine();
                        cd = Integer.parseInt(y.readLine());
                        sp = Integer.parseInt(y.readLine());
                        sal = Integer.parseInt(y.readLine());
                        casTyp cT = new casTyp(name, cd, sp, sal);
                        System.out.println("Details enterd: ");
                         cT.display();
                        break;
                    default:
                        System.out.println("Invalid choice!");
                        
                }
                break;
            default:
                System.out.println("Invalid choice!");
                
        }
    }
}
