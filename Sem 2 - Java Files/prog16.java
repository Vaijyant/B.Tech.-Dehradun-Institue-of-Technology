import java.io.*;
class prog16
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader y=new BufferedReader(x);
	    System.out.println("Enter a number");
	    int a=Integer.parseInt(y.readLine());
	    if (a%2==0)
	    System.out.println("The number is even");
	    else
	    System.out.println("The number is odd");
    }
}