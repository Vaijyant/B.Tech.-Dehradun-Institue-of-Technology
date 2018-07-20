import java.io.*;
class prog21
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter the marks");
	    int m=Integer.parseInt(y.readLine());
	    if(m>=80)
	    System.out.println("Distinction");
	    else if((m>60)&&(m<60))
	    System.out.println("First Division");
	    else if((m>=45)&&(m<60))
	    System.out.println("Second Division");
	    else if((m>=40)&&(m<45))
	    System.out.println("Pass");
	    else
	    System.out.println("Promotion Not Granted");
    }
}
	    
	    