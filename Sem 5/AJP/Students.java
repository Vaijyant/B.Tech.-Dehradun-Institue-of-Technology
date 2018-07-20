import java.sql.*;
import java.io.*;

public class Students
{

    private static final String DBDriver = "com.mysql.jdbc.Driver";
    private static final String DBUrl = "jdbc:mysql://localhost/oes";
    private static final String DBUser = "root";
    private static final String DBPass = "root";

    static
    {
        try
        {
            Class.forName(DBDriver);
        }
        catch (Exception ex)
        {
            System.out.println("DBManager :- Driver Not Avaialble :- " + ex);
        }
    }
      private static Connection getConnection() throws Exception
	    {
	        Connection con = DriverManager.getConnection(DBUrl, DBUser, DBPass);
	        return con;
    }

   	public static void addStudent(int n, String name, String course)
    {
        try
        {
        Connection con = getConnection();
        PreparedStatement st = con.prepareStatement("insert into oes.students values (?, ?, ?)");
		st.setInt(1, n);
        st.setString(2,name);
        st.setString(3,course);

        st.executeUpdate();

        st.close();
        con.close();

        }
        catch(Exception ex){}

     }
     public static void main(String args[])throws IOException
     {

		 BufferedReader y=new BufferedReader(new InputStreamReader(System.in));
		 System.out.println("Student Entry form: ");
		 System.out.println("Enter roll number: ");
		 int rn = Integer.parseInt(y.readLine());
		 System.out.println("Enter name: ");
		 String name = y.readLine();
		 System.out.println("Enter course: ");
		 String course = y.readLine();
		 addStudent(rn, name, course);
		System.out.println("Record Saved!");
		}
	}
