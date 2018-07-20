import java.io.*;
class prog12
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter two numbers");
	    int a = Integer.parseInt(y.readLine());
	    int b = Integer.parseInt(y.readLine());
	    System.out.println("Sum="+(a+b));
	    System.out.println("diffrence="+(a-b));
    }
}

	    
