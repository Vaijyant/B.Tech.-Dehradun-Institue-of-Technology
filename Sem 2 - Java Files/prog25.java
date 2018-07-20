import java.io.*;
class prog25
{
	public static void main (String args[])throws IOException
	{
	    InputStreamReader x=new InputStreamReader(System.in);
	    BufferedReader in=new BufferedReader(x);
	    System.out.println("Enter the number of days");
	    int a,b,c,y,d;
	    a=Integer.parseInt(in.readLine());
	    y=a/365;
	    b=a%365;
	    c=b/30;
	    d=b%30;
	    System.out.println("The no.of years = "+y);
	    System.out.println("The no. of months ="+c);
	    System.out.println("The no.of days = "+d);
    }
}

	    